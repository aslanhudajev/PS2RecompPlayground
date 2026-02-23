#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _ipuVdec
// Address: 0x161348 - 0x1614fc
void _ipuVdec_0x161348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_ipuVdec");


    ctx->pc = 0x161348u;

    // 0x161348: 0x27bdff80
    ctx->pc = 0x161348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16134c: 0x3c021000
    ctx->pc = 0x16134cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x161350: 0xffb10010
    ctx->pc = 0x161350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x161354: 0x34422010
    ctx->pc = 0x161354u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x161358: 0xffbf0070
    ctx->pc = 0x161358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x16135c: 0x3c058000
    ctx->pc = 0x16135cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x161360: 0xffb60060
    ctx->pc = 0x161360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x161364: 0x34a54000
    ctx->pc = 0x161364u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16384));
    // 0x161368: 0xffb50050
    ctx->pc = 0x161368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x16136c: 0x882d
    ctx->pc = 0x16136cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161370: 0xffb40040
    ctx->pc = 0x161370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x161374: 0x302d
    ctx->pc = 0x161374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161378: 0xffb30030
    ctx->pc = 0x161378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16137c: 0xffb20020
    ctx->pc = 0x16137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161380: 0xffb00000
    ctx->pc = 0x161380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161384: 0x8c430000
    ctx->pc = 0x161384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161388: 0x3c028000
    ctx->pc = 0x161388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x16138c: 0x651824
    ctx->pc = 0x16138cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161390: 0x1462001a
    ctx->pc = 0x161390u;
    {
        const bool branch_taken_0x161390 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x161394u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 26));
        if (branch_taken_0x161390) {
            ctx->pc = 0x1613FCu;
            goto label_1613fc;
        }
    }
    ctx->pc = 0x161398u;
    // 0x161398: 0x3c130023
    ctx->pc = 0x161398u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x16139c: 0x3c120023
    ctx->pc = 0x16139cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x1613a0: 0x3c150023
    ctx->pc = 0x1613a0u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
    // 0x1613a4: 0x3c140023
    ctx->pc = 0x1613a4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x1613a8: 0x3c160023
    ctx->pc = 0x1613a8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)35 << 16));
    // 0x1613ac: 0x0
    ctx->pc = 0x1613acu;
    // NOP
label_1613b0:
    // 0x1613b0: 0xc0102d
    ctx->pc = 0x1613b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613b4: 0x28421389
    ctx->pc = 0x1613b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x1613b8: 0x14400005
    ctx->pc = 0x1613B8u;
    {
        const bool branch_taken_0x1613b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1613BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1613b8) {
            ctx->pc = 0x1613D0u;
            goto label_1613d0;
        }
    }
    ctx->pc = 0x1613C0u;
    // 0x1613c0: 0x3c020023
    ctx->pc = 0x1613c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1613c4: 0xc058f00
    ctx->pc = 0x1613C4u;
    SET_GPR_U32(ctx, 31, 0x1613CCu);
    ctx->pc = 0x1613C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1613CCu; }
        else if (ctx->pc != 0x1613CCu) { ctx->pc = 0x1613CCu; }
    }
    if (ctx->pc != 0x1613CCu) { return; }
    ctx->pc = 0x1613CCu;
    // 0x1613cc: 0x302d
    ctx->pc = 0x1613ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1613d0:
    // 0x1613d0: 0x3c031000
    ctx->pc = 0x1613d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1613d4: 0x3c048000
    ctx->pc = 0x1613d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x1613d8: 0x34632010
    ctx->pc = 0x1613d8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x1613dc: 0x34844000
    ctx->pc = 0x1613dcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 16384));
    // 0x1613e0: 0x8c620000
    ctx->pc = 0x1613e0u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1613e4: 0x3c058000
    ctx->pc = 0x1613e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32768 << 16));
    // 0x1613e8: 0x441024
    ctx->pc = 0x1613e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1613ec: 0x1045fff0
    ctx->pc = 0x1613ECu;
    {
        const bool branch_taken_0x1613ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1613F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
        if (branch_taken_0x1613ec) {
            ctx->pc = 0x1613B0u;
            goto label_1613b0;
        }
    }
    ctx->pc = 0x1613F4u;
    // 0x1613f4: 0x10000008
    ctx->pc = 0x1613F4u;
    {
        const bool branch_taken_0x1613f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1613F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
        if (branch_taken_0x1613f4) {
            ctx->pc = 0x161418u;
            goto label_161418;
        }
    }
    ctx->pc = 0x1613FCu;
label_1613fc:
    // 0x1613fc: 0x3c130023
    ctx->pc = 0x1613fcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x161400: 0x3c120023
    ctx->pc = 0x161400u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x161404: 0x3c150023
    ctx->pc = 0x161404u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
    // 0x161408: 0x3c140023
    ctx->pc = 0x161408u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x16140c: 0x3c160023
    ctx->pc = 0x16140cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)35 << 16));
    // 0x161410: 0x3c033000
    ctx->pc = 0x161410u;
    SET_GPR_U32(ctx, 3, ((uint32_t)12288 << 16));
    // 0x161414: 0x3c041000
    ctx->pc = 0x161414u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
label_161418:
    // 0x161418: 0x2031825
    ctx->pc = 0x161418u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x16141c: 0x34842000
    ctx->pc = 0x16141cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8192));
    // 0x161420: 0x31703
    ctx->pc = 0x161420u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x161424: 0xac830000
    ctx->pc = 0x161424u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x161428: 0x2645a148
    ctx->pc = 0x161428u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 4294943048));
    // 0x16142c: 0x21080
    ctx->pc = 0x16142cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x161430: 0x451021
    ctx->pc = 0x161430u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x161434: 0xdc860000
    ctx->pc = 0x161434u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x161438: 0x8c430000
    ctx->pc = 0x161438u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16143c: 0x4c1000f
    ctx->pc = 0x16143Cu;
    {
        const bool branch_taken_0x16143c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x161440u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294943332), GPR_U32(ctx, 3));
        if (branch_taken_0x16143c) {
            ctx->pc = 0x16147Cu;
            goto label_16147c;
        }
    }
    ctx->pc = 0x161444u;
    // 0x161444: 0x3c101000
    ctx->pc = 0x161444u;
    SET_GPR_U32(ctx, 16, ((uint32_t)4096 << 16));
    // 0x161448: 0x3c120023
    ctx->pc = 0x161448u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x16144c: 0x36102000
    ctx->pc = 0x16144cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 8192));
    // 0x161450: 0x220102d
    ctx->pc = 0x161450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161454: 0x0
    ctx->pc = 0x161454u;
    // NOP
label_161458:
    // 0x161458: 0x28421389
    ctx->pc = 0x161458u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x16145c: 0x14400004
    ctx->pc = 0x16145Cu;
    {
        const bool branch_taken_0x16145c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x161460u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x16145c) {
            ctx->pc = 0x161470u;
            goto label_161470;
        }
    }
    ctx->pc = 0x161464u;
    // 0x161464: 0x8e44a21c
    ctx->pc = 0x161464u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4294943260)));
    // 0x161468: 0xc058f00
    ctx->pc = 0x161468u;
    SET_GPR_U32(ctx, 31, 0x161470u);
    ctx->pc = 0x16146Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161470u; }
        else if (ctx->pc != 0x161470u) { ctx->pc = 0x161470u; }
    }
    if (ctx->pc != 0x161470u) { return; }
    ctx->pc = 0x161470u;
label_161470:
    // 0x161470: 0xde060000
    ctx->pc = 0x161470u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x161474: 0x4c0fff8
    ctx->pc = 0x161474u;
    {
        const bool branch_taken_0x161474 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x161478u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161474) {
            ctx->pc = 0x161458u;
            goto label_161458;
        }
    }
    ctx->pc = 0x16147Cu;
label_16147c:
    // 0x16147c: 0x3c021000
    ctx->pc = 0x16147cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x161480: 0x3c041000
    ctx->pc = 0x161480u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x161484: 0xdc842030
    ctx->pc = 0x161484u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x161488: 0x34422020
    ctx->pc = 0x161488u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8224));
    // 0x16148c: 0x8c420000
    ctx->pc = 0x16148cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x161490: 0x4183c
    ctx->pc = 0x161490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x161494: 0x3183f
    ctx->pc = 0x161494u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x161498: 0x4810005
    ctx->pc = 0x161498u;
    {
        const bool branch_taken_0x161498 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16149Cu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294945496), GPR_U32(ctx, 3));
        if (branch_taken_0x161498) {
            ctx->pc = 0x1614B0u;
            goto label_1614b0;
        }
    }
    ctx->pc = 0x1614A0u;
    // 0x1614a0: 0x3042001f
    ctx->pc = 0x1614a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
    // 0x1614a4: 0x21023
    ctx->pc = 0x1614a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1614a8: 0x10000002
    ctx->pc = 0x1614A8u;
    {
        const bool branch_taken_0x1614a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1614ACu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 31));
        if (branch_taken_0x1614a8) {
            ctx->pc = 0x1614B4u;
            goto label_1614b4;
        }
    }
    ctx->pc = 0x1614B0u;
label_1614b0:
    // 0x1614b0: 0x24020020
    ctx->pc = 0x1614b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_1614b4:
    // 0x1614b4: 0xae82aadc
    ctx->pc = 0x1614b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945500), GPR_U32(ctx, 2));
    // 0x1614b8: 0x6183c
    ctx->pc = 0x1614b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1614bc: 0x3183f
    ctx->pc = 0x1614bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1614c0: 0x30c2ffff
    ctx->pc = 0x1614c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1614c4: 0x2c630001
    ctx->pc = 0x1614c4u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 3), 1));
    // 0x1614c8: 0x21400
    ctx->pc = 0x1614c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x1614cc: 0xaec3a348
    ctx->pc = 0x1614ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294943560), GPR_U32(ctx, 3));
    // 0x1614d0: 0x21403
    ctx->pc = 0x1614d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1614d4: 0xdfbf0070
    ctx->pc = 0x1614d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1614d8: 0xdfb60060
    ctx->pc = 0x1614d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1614dc: 0xdfb50050
    ctx->pc = 0x1614dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1614e0: 0xdfb40040
    ctx->pc = 0x1614e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1614e4: 0xdfb30030
    ctx->pc = 0x1614e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1614e8: 0xdfb20020
    ctx->pc = 0x1614e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1614ec: 0xdfb10010
    ctx->pc = 0x1614ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1614f0: 0xdfb00000
    ctx->pc = 0x1614f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1614f4: 0x3e00008
    ctx->pc = 0x1614F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1614F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1613B0u: goto label_1613b0;
            case 0x1613D0u: goto label_1613d0;
            case 0x1613FCu: goto label_1613fc;
            case 0x161418u: goto label_161418;
            case 0x161458u: goto label_161458;
            case 0x161470u: goto label_161470;
            case 0x16147Cu: goto label_16147c;
            case 0x1614B0u: goto label_1614b0;
            case 0x1614B4u: goto label_1614b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1614FCu;
}
