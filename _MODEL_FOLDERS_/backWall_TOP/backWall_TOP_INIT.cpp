//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"backWall_TOP_DOT3.png"].CGImage;      
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
        glGenTextures(1, &backWall_TOP_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, backWall_TOP_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"backWall_TOP.png"].CGImage;           
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
        glGenTextures(1, &backWall_TOP_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, backWall_TOP_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/backWall_TOP/backWall_TOP_DOT3.png",     backWall_TOP_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/backWall_TOP/backWall_TOP.png",          backWall_TOP_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "backWall_TOP.cpp"                                                                                         
    glGenBuffers(1,              &backWall_TOP_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, backWall_TOP_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(backWall_TOP), backWall_TOP, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "backWall_TOP_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &backWall_TOP_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, backWall_TOP_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(backWall_TOP_INDICES), backWall_TOP_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    backWall_TOP_boundingBox[0] = -3.28248;
    backWall_TOP_boundingBox[1] = 3.36368;
    backWall_TOP_boundingBox[2] = 2.63236;
    backWall_TOP_boundingBox[3] = 5.22896;
    backWall_TOP_boundingBox[4] = -3.23657;
    backWall_TOP_boundingBox[5] = 0;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -3.28248;
    collisionBoxArray[boxCount][1] = 3.36368;
    collisionBoxArray[boxCount][2] = 2.63236;
    collisionBoxArray[boxCount][3] = 5.22896;
    collisionBoxArray[boxCount][4] = -3.23657;
    collisionBoxArray[boxCount][5] = 0;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
