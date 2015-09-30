    if(sideWalls_1_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &sideWalls_1_NORMALMAP);    
        sideWalls_1_NORMALMAP = 0;                      
    }                                                              
    if(sideWalls_1_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &sideWalls_1_TEXTUREMAP);   
        sideWalls_1_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(sideWalls_1_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &sideWalls_1_VBO);           
        sideWalls_1_VBO  = 0;                           
    }                                                              
    if(sideWalls_1_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &sideWalls_1_INDICES_VBO);   
        sideWalls_1_INDICES_VBO  = 0;                   
    }                                                              
