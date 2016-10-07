﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OptimizeImagesCompression
{
    class CmdArgsParser
    {
        public string GetCmdArgForParam(string param)
        {
            string[] allargsparams = Environment.GetCommandLineArgs();
            return ParseCmdArgs(allargsparams, param);
        }

        private string ParseCmdArgs(string[] allargsparams, string param)
        {
            for (int i = 0; i < allargsparams.Length; i++)
            {
                if (allargsparams[i] == param)
                {
                    if (String.IsNullOrEmpty(allargsparams[i+1]))
                    {
                        Console.WriteLine("arg is null for parametr " + param + " terminating...");
                        Environment.Exit(0);
                        return "Null";
                    }
                    else
                    {
                        return allargsparams[i + 1];
                    }
                }
            }
            Console.WriteLine("arg is not found for " + param + " terminating...");
            Environment.Exit(0);
            return "ArgNotFound";
        }
    }
}
