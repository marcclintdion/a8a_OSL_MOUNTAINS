    if(sideWalls_3_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &sideWalls_3_NORMALMAP);    
        sideWalls_3_NORMALMAP = 0;                      
    }                                                              
    if(sideWalls_3_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &sideWalls_3_TEXTUREMAP);   
        sideWalls_3_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(sideWalls_3_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &sideWalls_3_VBO);           
        sideWalls_3_VBO  = 0;                           
    }                                                              
    if(sideWalls_3_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &sideWalls_3_INDICES_VBO);   
        sideWalls_3_INDICES_VBO  = 0;                   
    }                                                              
