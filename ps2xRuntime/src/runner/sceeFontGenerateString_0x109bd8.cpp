#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <cstring>
#include <cmath>

static constexpr uint32_t kFontBase     = 0x176148u;
static constexpr uint32_t kFontEntrySz  = 0x24u;

void sceeFontGenerateString_0x109bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const float sclx = ctx->f[12];
    const float scly = ctx->f[13];
    const uint32_t bufAddr  = getRegU32(ctx, 4);   // param_3
    const uint64_t paramX   = GPR_U64(ctx, 5);     // param_4 (ulong x)
    const int64_t  paramY   = GPR_S64(ctx, 6);     // param_5 (long y)
    const int      paramW   = (int)getRegU32(ctx, 7);  // param_6 (width)
    const int      paramH   = (int)getRegU32(ctx, 8);  // param_7 (height)
    const uint32_t colour   = getRegU32(ctx, 9);       // param_8
    const int      alignCh  = static_cast<int8_t>(getRegU32(ctx, 10) & 0xffu); // param_9
    const int      fontId   = (int)getRegU32(ctx, 11);  // param_10

    const uint32_t sp = getRegU32(ctx, 29);
    const uint32_t strAddr = FAST_READ32(sp + 0x00u);
    const uint32_t param14 = FAST_READ32(sp + 0x18u);

    if (bufAddr == 0u) {
        setReturnS32(ctx, 0);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    const uint32_t gp = getRegU32(ctx, 28);
    const uint32_t fontModeAdj = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7c98));
    const uint32_t shiftAmt = fontModeAdj & 0x1fu;
    const int scrHeight = (int)FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b5c));
    const int scrWidth  = (int)FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b60));
    const uint32_t fontClut = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b64));

    const uint32_t fontOff = (uint32_t)(fontId * (int)kFontEntrySz);
    const uint32_t glyphTablePtr = FAST_READ32(kFontBase + fontOff);
    const int lineH = (int)FAST_READ32(kFontBase + fontOff + 0x18u);

    int iVar21 = 0;
    int iStack_dc = 0;
    uint32_t uStack_d8 = 0;
    int iVar15 = 0; // totalAdvance

    int16_t sVar8;
    {
        int yStepRaw = (int)((float)((lineH + 6) * 16) * scly);
        sVar8 = (int16_t)(((int)paramY + 0x700) * 16) + (int16_t)(yStepRaw >> (int)shiftAmt);
    }

    int16_t baseX = (int16_t)(((int)paramX + 0x6c0) * 16);

    if (param14 != 0u) {
        int64_t clipY1 = (int64_t)((int)paramY + paramH);
        int64_t clipX1 = (int64_t)((int)paramX + paramW);
        if (clipY1 > scrHeight - 1) clipY1 = (int64_t)(scrHeight - 1);
        if (clipX1 > scrWidth - 1)  clipX1 = (int64_t)(scrWidth - 1);
        int64_t clipY0 = 0;
        if (paramY > 0) clipY0 = paramY;
        uint64_t clipX0 = 0;
        if ((int64_t)paramX > 0) clipX0 = paramX;

        uint64_t scissor = clipX0 | ((uint64_t)(uint32_t)clipX1 << 16)
                         | ((uint64_t)(uint32_t)clipY0 << 32) | ((uint64_t)(uint32_t)clipY1 << 48);

        FAST_WRITE64(bufAddr + 0x00, 0x1000000000000005ull);
        FAST_WRITE64(bufAddr + 0x08, 0x0eull);
        FAST_WRITE64(bufAddr + 0x10, scissor);
        FAST_WRITE64(bufAddr + 0x18, 0x40ull);
        FAST_WRITE64(bufAddr + 0x20, 0x20000ull);
        FAST_WRITE64(bufAddr + 0x28, 0x47ull);
        FAST_WRITE64(bufAddr + 0x30, 0x44ull);
        FAST_WRITE64(bufAddr + 0x38, 0x42ull);
        FAST_WRITE64(bufAddr + 0x40, 0x160ull);
        FAST_WRITE64(bufAddr + 0x48, 0x14ull);
        FAST_WRITE64(bufAddr + 0x50, 0x156ull);
        FAST_WRITE64(bufAddr + 0x58, 0ull);
        FAST_WRITE64(bufAddr + 0x60, 0x1000000000000001ull);
        FAST_WRITE64(bufAddr + 0x68, 0x0eull);

        uint64_t iVar5  = (uint64_t)FAST_READ32(kFontBase + fontOff + 0x08u);
        uint64_t iVar22 = (uint64_t)FAST_READ32(kFontBase + fontOff + 0x0cu);
        uint64_t iVar3  = (uint64_t)FAST_READ32(kFontBase + fontOff + 0x10u);
        uint64_t iVar4  = (uint64_t)FAST_READ32(kFontBase + fontOff + 0x14u);

        uint64_t tex0 = iVar5
                       | 0x2000000000000000ull
                       | (iVar22 << 14)
                       | 0x400000000ull
                       | (iVar3 << 26)
                       | 0x1400000ull
                       | (iVar4 << 30)
                       | ((uint64_t)fontClut << 37);

        FAST_WRITE64(bufAddr + 0x70, tex0);
        FAST_WRITE64(bufAddr + 0x78, 6ull);
        FAST_WRITE64(bufAddr + 0x80, 0x1000000000000001ull);
        FAST_WRITE64(bufAddr + 0x88, 0x0eull);
        FAST_WRITE64(bufAddr + 0x90, (uint64_t)colour);
        FAST_WRITE64(bufAddr + 0x98, 1ull);

        iVar21 = 10;
    }

    int iVar22_qw = iVar21 + 1;
    uint32_t s2 = bufAddr + (uint32_t)(iVar22_qw * 16);
    uint32_t uVar20 = 0;

    size_t sLen = 0;
    {
        const char* hostStr = reinterpret_cast<const char*>(getConstMemPtr(rdram, strAddr));
        if (hostStr) sLen = ::strlen(hostStr);
    }

    while (uVar20 < sLen) {
        uint8_t bVar1 = FAST_READ8(strAddr + uVar20);
        uint32_t uVar9 = (uint32_t)bVar1;
        int8_t chSigned = (int8_t)bVar1;

        if (uStack_d8 < 0x21u) {
            goto label_check_printable;
        }

        if (uVar9 > 0x20u) {
            uint32_t dat176168 = FAST_READ32(kFontBase + fontOff + 0x20u);
            if (dat176168 == 0u) {
                uint32_t fontPtr0 = FAST_READ32(kFontBase + fontOff);
                uint32_t tableAddr = FAST_READ32(fontPtr0 + 0x2000u);
                int8_t kern = (int8_t)FAST_READ8(tableAddr - 0x1c20u + uStack_d8 * 0xe0u + uVar9);
                iVar15 += (int)((float)(int)kern * sclx);
            }
            goto label_check_printable;
        }

        goto label_space;

label_check_printable:
        if (uVar9 < 0x21u) {
            goto label_space;
        }

        {
            int glyphIdx = (int)chSigned;
            uint32_t iVar19_off = (uint32_t)(glyphIdx * 0x20);

            if (param14 != 0u) {
                uint32_t fontPtr = FAST_READ32(kFontBase + fontOff);
                int16_t sVar7 = baseX + (int16_t)iVar15;

                iVar22_qw += 2;
                iStack_dc += 1;

                FAST_WRITE16(s2 + 0x00, FAST_READ16(fontPtr + iVar19_off + 0));
                FAST_WRITE16(s2 + 0x02, FAST_READ16(fontPtr + iVar19_off + 2));

                int16_t dx0 = (int16_t)FAST_READ16(fontPtr + iVar19_off + 8);
                int16_t dy0 = (int16_t)FAST_READ16(fontPtr + iVar19_off + 10);
                FAST_WRITE16(s2 + 0x08, (uint16_t)(sVar7 + (int16_t)(int)((float)(int)dx0 * sclx)));
                int yVal0 = (int)((float)(int)dy0 * scly) >> (int)shiftAmt;
                FAST_WRITE16(s2 + 0x0a, (uint16_t)(sVar8 + (int16_t)yVal0));
                FAST_WRITE32(s2 + 0x0c, 1u);

                s2 += 0x10u;

                FAST_WRITE16(s2 + 0x00, FAST_READ16(fontPtr + iVar19_off + 4));
                FAST_WRITE16(s2 + 0x02, FAST_READ16(fontPtr + iVar19_off + 6));

                int16_t dx1 = (int16_t)FAST_READ16(fontPtr + iVar19_off + 12);
                int16_t dy1 = (int16_t)FAST_READ16(fontPtr + iVar19_off + 14);
                FAST_WRITE16(s2 + 0x08, (uint16_t)(sVar7 + (int16_t)(int)((float)(int)dx1 * sclx)));
                int yVal1 = (int)((float)(int)dy1 * scly) >> (int)shiftAmt;
                FAST_WRITE16(s2 + 0x0a, (uint16_t)(sVar8 + (int16_t)yVal1));
                FAST_WRITE32(s2 + 0x0c, 1u);

                s2 += 0x10u;
            }

            {
                uint32_t fontPtr = FAST_READ32(kFontBase + fontOff);
                uint32_t advOff = (uint32_t)((glyphIdx * 2 + 1) * 16 + 8);
                int16_t advW = (int16_t)FAST_READ16(fontPtr + advOff);
                iVar15 += (int)((float)(int)advW * sclx);
            }
        }
        goto label_next;

label_space:
        {
            int spaceW = (int)FAST_READ32(kFontBase + fontOff + 0x1cu);
            iVar15 += (int)((float)spaceW * sclx);
        }

label_next:
        uStack_d8 = uVar9;
        uVar20++;
    }

    if (param14 != 0u) {
        if (alignCh != 'L') {
            if (alignCh == 'C' || alignCh == 'R') {
                int shift = paramW * 16 - iVar15;
                if (alignCh == 'C') shift >>= 1;
                if (iStack_dc > 0) {
                    uint32_t adj = bufAddr + (uint32_t)(iVar21 * 16) + 0x20u + 8u;
                    for (int k = 0; k < iStack_dc; k++) {
                        int16_t oldX0 = (int16_t)FAST_READ16(adj - 8u);
                        int16_t oldX1 = (int16_t)FAST_READ16(adj + 8u);
                        FAST_WRITE16(adj - 8u, (uint16_t)(oldX0 + (int16_t)shift));
                        FAST_WRITE16(adj + 8u, (uint16_t)(oldX1 + (int16_t)shift));
                        adj += 0x20u;
                    }
                }
            } else if (alignCh == 'J' && sLen > 1) {
                int iVar19_div = (int)sLen - 1;
                if (iVar19_div == 0) iVar19_div = 1;
                int spacePer = (paramW * 16 - iVar15) / iVar19_div;
                uint32_t adj = bufAddr + (uint32_t)(iVar21 * 16) + 0x20u + 8u;
                int accum = 0;
                for (uint32_t jj = 0; jj < sLen; jj++) {
                    int8_t jch = (int8_t)FAST_READ8(strAddr + jj);
                    if (jch > 0x20) {
                        int16_t oldX0 = (int16_t)FAST_READ16(adj - 8u);
                        int16_t oldX1 = (int16_t)FAST_READ16(adj + 8u);
                        FAST_WRITE16(adj - 8u, (uint16_t)(oldX0 + (int16_t)accum));
                        FAST_WRITE16(adj + 8u, (uint16_t)(oldX1 + (int16_t)accum));
                        adj += 0x20u;
                    }
                    accum += spacePer;
                }
            }
        }

        if (param14 != 0u) {
            uint32_t tagAddr = bufAddr + (uint32_t)(iVar21 * 16);
            FAST_WRITE64(tagAddr + 0x00, (uint64_t)(uint32_t)iStack_dc | 0x4400000000000000ull);
            FAST_WRITE64(tagAddr + 0x08, 0x5353ull);

            uint32_t endAddr = bufAddr + (uint32_t)(iVar22_qw * 16);
            FAST_WRITE64(endAddr + 0x00, 0x1000000000008001ull);
            FAST_WRITE64(endAddr + 0x08, 0x0eull);

            int iVar19_end = iVar22_qw + 1;
            uint32_t endAddr2 = bufAddr + (uint32_t)(iVar19_end * 16);
            FAST_WRITE64(endAddr2 + 0x00, 0x01ff0000027f0000ull);
            FAST_WRITE64(endAddr2 + 0x08, 0x40ull);

            iVar22_qw += 2;
        }
    }

    int ret = 0;
    if (param14 != 0u) ret = iVar22_qw;
    setReturnS32(ctx, ret);
    ctx->pc = getRegU32(ctx, 31);
}
