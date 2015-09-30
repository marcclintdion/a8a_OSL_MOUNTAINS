    if(sideWalls_4_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &sideWalls_4_NORMALMAP);    
        sideWalls_4_NORMALMAP = 0;                      
    }                                                              
    if(sideWalls_4_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &sideWalls_4_TEXTUREMAP);   
        sideWalls_4_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(sideWalls_4_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &sideWalls_4_VBO);           
        sideWalls_4_VBO  = 0;                           
    }                                                              
    if(sideWalls_4_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &sideWalls_4_INDICES_VBO);   
        sideWalls_4_INDICES_VBO  = 0;                   
    }                                                              
