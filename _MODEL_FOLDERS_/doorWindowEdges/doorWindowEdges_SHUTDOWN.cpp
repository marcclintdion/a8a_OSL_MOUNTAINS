    if(doorWindowEdges_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &doorWindowEdges_NORMALMAP);    
        doorWindowEdges_NORMALMAP = 0;                      
    }                                                              
    if(doorWindowEdges_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &doorWindowEdges_TEXTUREMAP);   
        doorWindowEdges_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(doorWindowEdges_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &doorWindowEdges_VBO);           
        doorWindowEdges_VBO  = 0;                           
    }                                                              
    if(doorWindowEdges_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &doorWindowEdges_INDICES_VBO);   
        doorWindowEdges_INDICES_VBO  = 0;                   
    }                                                              
