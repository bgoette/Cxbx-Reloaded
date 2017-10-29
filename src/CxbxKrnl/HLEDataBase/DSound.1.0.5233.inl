// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;;
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->HLEDataBase->DSound.1.0.5233.inl
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * DirectSound::CDirectSound::EnableHeadphones
// ******************************************************************
OOVPA_XREF(CDirectSound_EnableHeadphones, 5233, 8,

    XREF_CDirectSound_EnableHeadphones,
    XRefZero)

        { 0x16, 0x45 },
        { 0x1D, 0x0B },
        { 0x2A, 0x05 },
        { 0x46, 0x95 },
        { 0x56, 0x80 },
        { 0x5D, 0x7F },
        { 0x74, 0xA4 },
        { 0x99, 0x08 },
OOVPA_END;
#if 0 // Replaced with generic OOVPA 3911
// ******************************************************************
// * IDirectSound_EnableHeadphones
// ******************************************************************
OOVPA_XREF(IDirectSound_EnableHeadphones, 5233, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_CDirectSound_EnableHeadphones ),

        // IDirectSound_EnableHeadphones+0x0A : add eax, 0xFFFFFFF8
        { 0x0A, 0x83 },
        { 0x0B, 0xC0 },
        { 0x0C, 0xF8 },

        // IDirectSound_EnableHeadphones+0x0F : sbb ecx, ecx
        { 0x0F, 0x1B },
        { 0x10, 0xC9 },

        // IDirectSound_EnableHeadphones+0x19 : retn 0x08
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;
#endif
// ******************************************************************
// * CDirectSoundStream_FlushEx
// ******************************************************************
OOVPA_XREF(CDirectSoundStream_FlushEx, 5233, 15,

    XREF_DSFLUSHEX2,
    XRefZero)

        { 0x24, 0xB8 },
        { 0x25, 0x05 },
        { 0x26, 0x40 },
        { 0x27, 0x00 },
        { 0x28, 0x80 },

        { 0x29, 0xEB },
        { 0x2A, 0x3A },
        { 0x2B, 0x83 },
        { 0x2C, 0x7D },

        { 0x36, 0x74 },
        { 0x37, 0x12 },

        { 0x3E, 0xFF },
        { 0x40, 0x0C },

        { 0x67, 0xC2 },
        { 0x68, 0x10 },
OOVPA_END;

#if 0 // Used 4627
// ******************************************************************
// * IDirectSoundStream_FlushEx
// ******************************************************************
OOVPA_XREF(IDirectSoundStream_FlushEx, 5233, 1+8,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x11, XREF_DSFLUSHEX2 ), 

        { 0x00, 0xFF },
        { 0x03, 0x10 },

        { 0x04, 0xFF },
        { 0x07, 0x10 },

        { 0x08, 0xFF },
        { 0x0B, 0x10 },

        { 0x15, 0xC2 },
        { 0x16, 0x10 },
OOVPA_END;
#endif

// ******************************************************************
// CMcpxAPU::SynchPlayback
// ******************************************************************
OOVPA_XREF(CMcpxAPU_SynchPlayback, 5233, 8,

    XREF_DSSYNCHPLAYBACKB,
    XRefZero)

        { 0x0C, 0x74 },
        { 0x1A, 0x1A },
        { 0x25, 0x53 },
        { 0x37, 0xF2 },
        { 0x58, 0xBC },
        { 0x84, 0x43 },
        { 0x9E, 0x64 },
        { 0xFF, 0x00 },
OOVPA_END;

// ******************************************************************
// * CDirectSound::SynchPlayback
// ******************************************************************
OOVPA_XREF(CDirectSound_SynchPlayback, 5233, 1+9,

    XREF_DSSYNCHPLAYBACKA,
    XRefOne)

        XREF_ENTRY( 0x08, XREF_DSSYNCHPLAYBACKB ),

        // CDirectSound_SynchPlayback+0x00 : mov eax, [esp+0x04]
        { 0x00, 0x8B },
        { 0x01, 0x44 },
        { 0x02, 0x24 },
        { 0x03, 0x04 },

        // CDirectSound_SynchPlayback+0x04 : mov ecx, [eax+0x0C]
        { 0x04, 0x8B },
        { 0x05, 0x48 },
        { 0x06, 0x0C },

        // CDirectSound_SynchPlayback+0x0C : retn 0x04
        { 0x0C, 0xC2 },
        { 0x0D, 0x04 },
OOVPA_END;

// ******************************************************************
// * IDirectSound8::SynchPlayback
// ******************************************************************
OOVPA_XREF(IDirectSound_SynchPlayback, 5233, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x11, XREF_DSSYNCHPLAYBACKA ),

        // IDirectSound_SynchPlayback+0x06 : add eax, 0xFFFFFFF8
        { 0x06, 0x83 },
        { 0x07, 0xC0 },
        { 0x08, 0xF8 },

        // IDirectSound_SynchPlayback+0x0B : sbb ecx, ecx
        { 0x0B, 0x1B },
        { 0x0C, 0xC9 },

        // IDirectSound_SynchPlayback+0x15 : retn 0x04
        { 0x15, 0xC2 },
        { 0x16, 0x04 },
OOVPA_END;

// ******************************************************************
// CDirectSoundVoice::SetMode
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetMode, 5233, 8,

    XREF_CDirectSoundVoice_SetMode,
    XRefZero)

        { 0x00, 0xF6 },
        { 0x07, 0x24 },
        { 0x0B, 0x10 },
        { 0x0E, 0xB4 },
        { 0x18, 0x3C },
        { 0x1A, 0x06 },
        { 0x21, 0x33 },
        { 0x24, 0x0C },
OOVPA_END;

// ******************************************************************
// CDirectSoundBuffer::SetMode
// ******************************************************************
OOVPA_XREF(CDirectSoundBuffer_SetMode, 5233, 1+7,

    XREF_CDirectSoundBuffer_SetMode,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_CDirectSoundVoice_SetMode ),

        { 0x01, 0xE8 },
        { 0x15, 0x0B },
        { 0x22, 0x05 },
        { 0x27, 0x26 },
        { 0x34, 0x14 },
        { 0x3F, 0x0B },
        { 0x50, 0x0C },
OOVPA_END;
#if 0 // Duplicate OOVPA, replacing with generic 4039
// ******************************************************************
// * IDirectSoundBuffer_SetMode
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetMode, 5233, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x19, XREF_CDirectSoundBuffer_SetMode ),

        // IDirectSoundBuffer_SetMode+0x0E : add eax, 0xFFFFFFE4
        { 0x0E, 0x83 },
        { 0x0F, 0xC0 },
        { 0x10, 0xE4 },

        // IDirectSoundBuffer_SetMode+0x13 : sbb ecx, ecx
        { 0x13, 0x1B },
        { 0x14, 0xC9 },

        // IDirectSoundBuffer_SetMode+0x19 : retn 0x0C
        { 0x1D, 0xC2 },
        { 0x1E, 0x0C },
OOVPA_END;
#endif
// ******************************************************************
// * CDirectSoundVoice::SetVolume
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetVolume, 5233, 1+7,

    XREF_CDirectSoundVoice_SetVolume,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_CMcpxVoiceClient_SetVolume ),

        { 0x02, 0x24 },
        { 0x06, 0x10 },
        { 0x0A, 0x08 },
        { 0x0E, 0x89 },
        { 0x12, 0x49 },
        { 0x19, 0xC2 },
        { 0x1A, 0x08 },
OOVPA_END;

// ******************************************************************
// * CDirectSoundBuffer::SetVolume
// ******************************************************************
OOVPA_XREF(CDirectSoundBuffer_SetVolume, 5233, 1+7,

    XREF_CDirectSoundBuffer_SetVolume,
    XRefOne)

        XREF_ENTRY( 0x32, XREF_CDirectSoundVoice_SetVolume ),

        { 0x0C, 0x00 },
        { 0x12, 0x85 },
        { 0x1C, 0x15 },
        { 0x26, 0xEB },
        { 0x30, 0x10 },
        { 0x3A, 0x74 },
        { 0x47, 0x8B },
OOVPA_END;

#if 0 // Replaced with generic OOVPA 4134
// ******************************************************************
// * CDirectSoundStream::SetMixBins
// ******************************************************************
OOVPA_XREF(CDirectSoundStream_SetMixBins, 5233, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x36, XREF_CDirectSoundVoice_SetMixBins ),

        { 0x0E, 0xB6 },
        { 0x15, 0x0B },
        { 0x27, 0x26 },
        { 0x2A, 0x24 },
        { 0x3E, 0x74 },
        { 0x4D, 0x5F },
        { 0x50, 0x08 },
OOVPA_END;
#endif

#if 0 // Don't use. Duplicate detection CDirectSoundVoice_SetConeAngles.
// ******************************************************************
// * CDirectSoundVoice::SetRolloffCurve
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetRolloffCurve, 5233, 8,

    XREF_DSVOICESETROLLOFFCURVE,
    XRefZero)

        { 0x07, 0x8B },
        { 0x10, 0x08 },
        { 0x12, 0x51 },
        { 0x19, 0xB4 },
        { 0x22, 0x51 },
        { 0x2B, 0x00 },
        { 0x34, 0x10 },
        { 0x3E, 0x33 },
OOVPA_END;
#endif
