//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"backWall_BOTTOM_DOT3.png"].CGImage;      
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData, width,                               
                                                                 height,                              
                                                                 8,                                   
                                                                 width * 4,                           
                                                                 CGImageGetColorSpace(spriteImage),   
                                                                 kCGImageAlphaNoneSkipLast);          
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &backWall_BOTTOM_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, backWall_BOTTOM_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"backWall_BOTTOM.png"].CGImage;           
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData,                                      
                                                     width,                                           
                                                     height,                                          
                                                     8,                                               
                                                     width * 4,                                       
                                                     CGImageGetColorSpace(spriteImage),               
                                                     kCGImageAlphaNoneSkipLast);                      
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &backWall_BOTTOM_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, backWall_BOTTOM_TEXTUREMAP);                              
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
            free(spriteData);                                                                         
        }                                                                                             
//----                                                                                                
#endif                                                                                                
//========================================================================                            
    //-----------------------------------------------------------------------------------                                              
    #ifdef WIN32                                                                                                                       
    loadTexture("_MODEL_FOLDERS_/backWall_BOTTOM/backWall_BOTTOM_DOT3.png",     backWall_BOTTOM_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/backWall_BOTTOM/backWall_BOTTOM.png",          backWall_BOTTOM_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "backWall_BOTTOM.cpp"                                                                                         
    glGenBuffers(1,              &backWall_BOTTOM_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, backWall_BOTTOM_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(backWall_BOTTOM), backWall_BOTTOM, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "backWall_BOTTOM_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &backWall_BOTTOM_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, backWall_BOTTOM_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(backWall_BOTTOM_INDICES), backWall_BOTTOM_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    backWall_BOTTOM_boundingBox[0] = -3.28179;
    backWall_BOTTOM_boundingBox[1] = 3.33535;
    backWall_BOTTOM_boundingBox[2] = 0.030988;
    backWall_BOTTOM_boundingBox[3] = 2.62727;
    backWall_BOTTOM_boundingBox[4] = -3.23657;
    backWall_BOTTOM_boundingBox[5] = 0;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -3.28179;
    collisionBoxArray[boxCount][1] = 3.33535;
    collisionBoxArray[boxCount][2] = 0.030988;
    collisionBoxArray[boxCount][3] = 2.62727;
    collisionBoxArray[boxCount][4] = -3.23657;
    collisionBoxArray[boxCount][5] = 0;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
