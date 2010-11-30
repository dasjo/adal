// $Id: openlayers_behavior_cluster.js,v 1.1.2.3 2010/07/21 09:38:30 strk Exp $

/**
 * @file
 * OpenLayers Behavior implementation for clustering.
 */

/**
 * OpenLayers Cluster Behavior
 */
Drupal.behaviors.openlayers_cluster = function(context) {
  var data = $(context).data('openlayers');
  if (data && data.map.behaviors.openlayers_behavior_cluster) {
    var options = data.map.behaviors.openlayers_behavior_cluster;
    var map = data.openlayers;
    var distance = parseInt(options.distance, 10);
    var threshold = parseInt(options.threshold, 10);
    var layers = [];
    for (var i in options.clusterlayer) {
      var selectedLayer = map.getLayersBy('drupalID', options.clusterlayer[i]);
      if (typeof selectedLayer[0] != 'undefined') {
        layers.push(selectedLayer[0]);
      }
    }
    
    // Go through chosen layers
    for (var i in layers) {
      var layer = layers[i];
      // Ensure vector layer
      if (layer.CLASS_NAME == 'OpenLayers.Layer.Vector') {
        var cluster = new OpenLayers.Strategy.Cluster(options);
        layer.addOptions({ 'strategies': [cluster] }); 
        cluster.setLayer(layer);
        cluster.features = layer.features.slice();
        cluster.activate();
        cluster.cluster();
      }
    }
  }
};

/*
 * Override of callback used by 'popup' behaviour to support clusters
 */
Drupal.theme.openlayersPopup = function(feature) {
  if(feature.cluster)
  {
    var output = '';
    var visited = []; // to keep track of already-visited items
    for(var i = 0; i < feature.cluster.length; i++) {
      var pf = feature.cluster[i]; // pseudo-feature
      if ( typeof pf.drupalFID != 'undefined' ) {
        var mapwide_id = feature.layer.drupalID + pf.drupalFID;
        if (mapwide_id in visited) continue;
        visited[mapwide_id] = true;
      }
      output += '<div class="openlayers-popup openlayers-popup-feature">' +
        Drupal.theme.openlayersPopup2(pf) + '</div>';
      //Drupal.theme.prototype.openlayersPopup(pf) + '</div>';
    }
    return output;
  }
  else
  {
    return Drupal.theme.prototype.openlayersPopup(feature);
  }
};

Drupal.theme.openlayersPopup2 = function(feature) {
  //dpm(feature);
  //if(feature.adal_popup)
  for(key in feature.attributes) {
    if(feature.attributes[key] != null) {
      lightId = "alumni" + feature.attributes.nid;
      insert = "onclick=\"Lightbox.triggerLightbox('lightframe', '" + lightId + "|width:980px;height:500px');return false;\"";
      insert += " rel='lightframe[b|width:980px;height:500px][]'";
      //insert += " rel='lightframe'";
      feature.attributes[key] = feature.attributes[key].replace("href=", insert + " href=");
    
    }
  }
  {
    var output =
      '<div class="openlayers-popup openlayers-popup-image">' +
        feature.attributes.field_alumni_contact_image_fid_rendered +
      '</div>' +
      '<div class="openlayers-popup openlayers-popup-name">' +
        feature.attributes.name +
      '</div>' +
      '<div class="openlayers-popup openlayers-popup-description">' +
        feature.attributes.description +
      '</div>';
      Lightbox.initList();
    return output;
  }
};
