    if(sideWalls_2_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &sideWalls_2_NORMALMAP);    
        sideWalls_2_NORMALMAP = 0;                      
    }                                                              
    if(sideWalls_2_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &sideWalls_2_TEXTUREMAP);   
        sideWalls_2_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(sideWalls_2_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &sideWalls_2_VBO);           
        sideWalls_2_VBO  = 0;                           
    }                                                              
    if(sideWalls_2_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &sideWalls_2_INDICES_VBO);   
        sideWalls_2_INDICES_VBO  = 0;                   
    }                                                              
