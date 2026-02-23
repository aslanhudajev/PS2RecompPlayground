#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _b2d
// Address: 0x1440b8 - 0x144234
void _b2d_0x1440b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_b2d");


    ctx->pc = 0x1440b8u;

    // 0x1440b8: 0x27bdff90
    ctx->pc = 0x1440b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1440bc: 0xffb40050
    ctx->pc = 0x1440bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1440c0: 0xffb20030
    ctx->pc = 0x1440c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1440c4: 0x24940014
    ctx->pc = 0x1440c4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 20));
    // 0x1440c8: 0xffb00010
    ctx->pc = 0x1440c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1440cc: 0xffbf0060
    ctx->pc = 0x1440ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1440d0: 0xa0802d
    ctx->pc = 0x1440d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440d4: 0xffb30040
    ctx->pc = 0x1440d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1440d8: 0xffb10020
    ctx->pc = 0x1440d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1440dc: 0x8c820010
    ctx->pc = 0x1440dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1440e0: 0x21080
    ctx->pc = 0x1440e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1440e4: 0x2829021
    ctx->pc = 0x1440e4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1440e8: 0x2652fffc
    ctx->pc = 0x1440e8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1440ec: 0x8e530000
    ctx->pc = 0x1440ecu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1440f0: 0xc050e00
    ctx->pc = 0x1440F0u;
    SET_GPR_U32(ctx, 31, 0x1440F8u);
    ctx->pc = 0x1440F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143800u;
    {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x143800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1440F8u; }
        else if (ctx->pc != 0x1440F8u) { ctx->pc = 0x1440F8u; }
    }
    if (ctx->pc != 0x1440F8u) { return; }
    ctx->pc = 0x1440F8u;
    // 0x1440f8: 0x40302d
    ctx->pc = 0x1440f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440fc: 0x24020020
    ctx->pc = 0x1440fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x144100: 0x28c3000b
    ctx->pc = 0x144100u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 11));
    // 0x144104: 0x461023
    ctx->pc = 0x144104u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x144108: 0x1060001a
    ctx->pc = 0x144108u;
    {
        const bool branch_taken_0x144108 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x14410Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x144108) {
            ctx->pc = 0x144174u;
            goto label_144174;
        }
    }
    ctx->pc = 0x144110u;
    // 0x144110: 0x2402000b
    ctx->pc = 0x144110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x144114: 0x3c043ff0
    ctx->pc = 0x144114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16368 << 16));
    // 0x144118: 0x461023
    ctx->pc = 0x144118u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x14411c: 0x3c03ffff
    ctx->pc = 0x14411cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x144120: 0x3183e
    ctx->pc = 0x144120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x144124: 0x531006
    ctx->pc = 0x144124u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x144128: 0x2238824
    ctx->pc = 0x144128u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14412c: 0x441025
    ctx->pc = 0x14412cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x144130: 0x292182b
    ctx->pc = 0x144130u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x144134: 0x2103c
    ctx->pc = 0x144134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144138: 0x2228825
    ctx->pc = 0x144138u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14413c: 0x10600002
    ctx->pc = 0x14413Cu;
    {
        const bool branch_taken_0x14413c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x144140u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14413c) {
            ctx->pc = 0x144148u;
            goto label_144148;
        }
    }
    ctx->pc = 0x144144u;
    // 0x144144: 0x8e44fffc
    ctx->pc = 0x144144u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_144148:
    // 0x144148: 0x2402000b
    ctx->pc = 0x144148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x14414c: 0x24c30015
    ctx->pc = 0x14414cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 21));
    // 0x144150: 0x461023
    ctx->pc = 0x144150u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x144154: 0x731804
    ctx->pc = 0x144154u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x144158: 0x441006
    ctx->pc = 0x144158u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x14415c: 0x621825
    ctx->pc = 0x14415cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144160: 0x2404ffff
    ctx->pc = 0x144160u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144164: 0x4203c
    ctx->pc = 0x144164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x144168: 0x3183c
    ctx->pc = 0x144168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14416c: 0x1000001f
    ctx->pc = 0x14416Cu;
    {
        const bool branch_taken_0x14416c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144170u;
        SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        if (branch_taken_0x14416c) {
            ctx->pc = 0x1441ECu;
            goto label_1441ec;
        }
    }
    ctx->pc = 0x144174u;
label_144174:
    // 0x144174: 0x292102b
    ctx->pc = 0x144174u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x144178: 0x10400003
    ctx->pc = 0x144178u;
    {
        const bool branch_taken_0x144178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14417Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x144178) {
            ctx->pc = 0x144188u;
            goto label_144188;
        }
    }
    ctx->pc = 0x144180u;
    // 0x144180: 0x2652fffc
    ctx->pc = 0x144180u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x144184: 0x8e470000
    ctx->pc = 0x144184u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_144188:
    // 0x144188: 0x24c6fff5
    ctx->pc = 0x144188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x14418c: 0x10c0001a
    ctx->pc = 0x14418Cu;
    {
        const bool branch_taken_0x14418c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x144190u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        if (branch_taken_0x14418c) {
            ctx->pc = 0x1441F8u;
            goto label_1441f8;
        }
    }
    ctx->pc = 0x144194u;
    // 0x144194: 0x3c053ff0
    ctx->pc = 0x144194u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16368 << 16));
    // 0x144198: 0x471006
    ctx->pc = 0x144198u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x14419c: 0xd31804
    ctx->pc = 0x14419cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x1441a0: 0x451025
    ctx->pc = 0x1441a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1441a4: 0x3c04ffff
    ctx->pc = 0x1441a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x1441a8: 0x4203e
    ctx->pc = 0x1441a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1441ac: 0x621825
    ctx->pc = 0x1441acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1441b0: 0x2248824
    ctx->pc = 0x1441b0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1441b4: 0x3183c
    ctx->pc = 0x1441b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1441b8: 0x292102b
    ctx->pc = 0x1441b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1441bc: 0x2238825
    ctx->pc = 0x1441bcu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1441c0: 0x10400002
    ctx->pc = 0x1441C0u;
    {
        const bool branch_taken_0x1441c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1441C4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1441c0) {
            ctx->pc = 0x1441CCu;
            goto label_1441cc;
        }
    }
    ctx->pc = 0x1441C8u;
    // 0x1441c8: 0x8e53fffc
    ctx->pc = 0x1441c8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_1441cc:
    // 0x1441cc: 0x61023
    ctx->pc = 0x1441ccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1441d0: 0xc71804
    ctx->pc = 0x1441d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x1441d4: 0x531006
    ctx->pc = 0x1441d4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x1441d8: 0x2404ffff
    ctx->pc = 0x1441d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1441dc: 0x4203c
    ctx->pc = 0x1441dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1441e0: 0x621825
    ctx->pc = 0x1441e0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1441e4: 0x2248824
    ctx->pc = 0x1441e4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1441e8: 0x3183c
    ctx->pc = 0x1441e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1441ec:
    // 0x1441ec: 0x3183e
    ctx->pc = 0x1441ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1441f0: 0x10000007
    ctx->pc = 0x1441F0u;
    {
        const bool branch_taken_0x1441f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1441F4u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        if (branch_taken_0x1441f0) {
            ctx->pc = 0x144210u;
            goto label_144210;
        }
    }
    ctx->pc = 0x1441F8u;
label_1441f8:
    // 0x1441f8: 0x3c033ff0
    ctx->pc = 0x1441f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16368 << 16));
    // 0x1441fc: 0x2631825
    ctx->pc = 0x1441fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x144200: 0x7103c
    ctx->pc = 0x144200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x144204: 0x2103e
    ctx->pc = 0x144204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x144208: 0x3883c
    ctx->pc = 0x144208u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14420c: 0x2228825
    ctx->pc = 0x14420cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_144210:
    // 0x144210: 0x220102d
    ctx->pc = 0x144210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144214: 0xdfbf0060
    ctx->pc = 0x144214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144218: 0xdfb40050
    ctx->pc = 0x144218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14421c: 0xdfb30040
    ctx->pc = 0x14421cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144220: 0xdfb20030
    ctx->pc = 0x144220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144224: 0xdfb10020
    ctx->pc = 0x144224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144228: 0xdfb00010
    ctx->pc = 0x144228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14422c: 0x3e00008
    ctx->pc = 0x14422Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144148u: goto label_144148;
            case 0x144174u: goto label_144174;
            case 0x144188u: goto label_144188;
            case 0x1441CCu: goto label_1441cc;
            case 0x1441ECu: goto label_1441ec;
            case 0x1441F8u: goto label_1441f8;
            case 0x144210u: goto label_144210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144234u;
}
