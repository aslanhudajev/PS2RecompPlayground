#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _getpic
// Address: 0x2ee2a8 - 0x2ee418
void _getpic_0x2ee2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee2a8u;

label_2ee2a8:
    // 0x2ee2a8: 0x27bdff90
    ctx->pc = 0x2ee2a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ee2ac:
    // 0x2ee2ac: 0xffb40040
    ctx->pc = 0x2ee2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2ee2b0:
    // 0x2ee2b0: 0xffb30030
    ctx->pc = 0x2ee2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2ee2b4:
    // 0x2ee2b4: 0x24140001
    ctx->pc = 0x2ee2b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_2ee2b8:
    // 0x2ee2b8: 0xffb20020
    ctx->pc = 0x2ee2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ee2bc:
    // 0x2ee2bc: 0x982d
    ctx->pc = 0x2ee2bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee2c0:
    // 0x2ee2c0: 0xffbf0060
    ctx->pc = 0x2ee2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ee2c4:
    // 0x2ee2c4: 0x80902d
    ctx->pc = 0x2ee2c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ee2c8:
    // 0x2ee2c8: 0xffb50050
    ctx->pc = 0x2ee2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2ee2cc:
    // 0x2ee2cc: 0xffb10010
    ctx->pc = 0x2ee2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ee2d0:
    // 0x2ee2d0: 0xffb00000
    ctx->pc = 0x2ee2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ee2d4:
    // 0x2ee2d4: 0x8e500040
    ctx->pc = 0x2ee2d4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_2ee2d8:
    // 0x2ee2d8: 0x8e0500d8
    ctx->pc = 0x2ee2d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2ee2dc:
    // 0x2ee2dc: 0x30a2003f
    ctx->pc = 0x2ee2dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 63));
label_2ee2e0:
    // 0x2ee2e0: 0x10400006
label_2ee2e4:
    if (ctx->pc == 0x2EE2E4u) {
        ctx->pc = 0x2EE2E4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2EE2E8u;
        goto label_2ee2e8;
    }
    ctx->pc = 0x2EE2E0u;
    {
        const bool branch_taken_0x2ee2e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE2E4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2ee2e0) {
            ctx->pc = 0x2EE2FCu;
            goto label_2ee2fc;
        }
    }
    ctx->pc = 0x2EE2E8u;
label_2ee2e8:
    // 0x2ee2e8: 0x3c04003c
    ctx->pc = 0x2ee2e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_2ee2ec:
    // 0x2ee2ec: 0xc0bba4a
label_2ee2f0:
    if (ctx->pc == 0x2EE2F0u) {
        ctx->pc = 0x2EE2F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942008));
        ctx->pc = 0x2EE2F4u;
        goto label_2ee2f4;
    }
    ctx->pc = 0x2EE2ECu;
    SET_GPR_U32(ctx, 31, 0x2EE2F4u);
    ctx->pc = 0x2EE2F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942008));
    ctx->pc = 0x2EE928u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x2ee928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE2F4u; }
    }
    if (ctx->pc != 0x2EE2F4u) { return; }
    ctx->pc = 0x2EE2F4u;
label_2ee2f4:
    // 0x2ee2f4: 0x1000003f
label_2ee2f8:
    if (ctx->pc == 0x2EE2F8u) {
        ctx->pc = 0x2EE2F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2EE2FCu;
        goto label_2ee2fc;
    }
    ctx->pc = 0x2EE2F4u;
    {
        const bool branch_taken_0x2ee2f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE2F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2ee2f4) {
            ctx->pc = 0x2EE3F4u;
            goto label_2ee3f4;
        }
    }
    ctx->pc = 0x2EE2FCu;
label_2ee2fc:
    // 0x2ee2fc: 0x3c15003a
    ctx->pc = 0x2ee2fcu;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
label_2ee300:
    // 0x2ee300: 0xaea038c0
    ctx->pc = 0x2ee300u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 14528), GPR_U32(ctx, 0));
label_2ee304:
    // 0x2ee304: 0x2402ffff
    ctx->pc = 0x2ee304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ee308:
    // 0x2ee308: 0x1262000c
label_2ee30c:
    if (ctx->pc == 0x2EE30Cu) {
        ctx->pc = 0x2EE30Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), 5));
        ctx->pc = 0x2EE310u;
        goto label_2ee310;
    }
    ctx->pc = 0x2EE308u;
    {
        const bool branch_taken_0x2ee308 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2EE30Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), 5));
        if (branch_taken_0x2ee308) {
            ctx->pc = 0x2EE33Cu;
            goto label_2ee33c;
        }
    }
    ctx->pc = 0x2EE310u;
label_2ee310:
    // 0x2ee310: 0x3c11003a
    ctx->pc = 0x2ee310u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
label_2ee314:
    // 0x2ee314: 0x0
    ctx->pc = 0x2ee314u;
    // NOP
label_2ee318:
    // 0x2ee318: 0xc0bcac2
label_2ee31c:
    if (ctx->pc == 0x2EE31Cu) {
        ctx->pc = 0x2EE320u;
        goto label_2ee320;
    }
    ctx->pc = 0x2EE318u;
    SET_GPR_U32(ctx, 31, 0x2EE320u);
    ctx->pc = 0x2F2B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x2f2b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE320u; }
    }
    if (ctx->pc != 0x2EE320u) { return; }
    ctx->pc = 0x2EE320u;
label_2ee320:
    // 0x2ee320: 0x40a02d
    ctx->pc = 0x2ee320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee324:
    // 0x2ee324: 0x12800004
label_2ee328:
    if (ctx->pc == 0x2EE328u) {
        ctx->pc = 0x2EE328u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12780)));
        ctx->pc = 0x2EE32Cu;
        goto label_2ee32c;
    }
    ctx->pc = 0x2EE324u;
    {
        const bool branch_taken_0x2ee324 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE328u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12780)));
        if (branch_taken_0x2ee324) {
            ctx->pc = 0x2EE338u;
            goto label_2ee338;
        }
    }
    ctx->pc = 0x2EE32Cu;
label_2ee32c:
    // 0x2ee32c: 0x8e0200d4
    ctx->pc = 0x2ee32cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2ee330:
    // 0x2ee330: 0x1462fff9
label_2ee334:
    if (ctx->pc == 0x2EE334u) {
        ctx->pc = 0x2EE338u;
        goto label_2ee338;
    }
    ctx->pc = 0x2EE330u;
    {
        const bool branch_taken_0x2ee330 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ee330) {
            ctx->pc = 0x2EE318u;
            goto label_2ee318;
        }
    }
    ctx->pc = 0x2EE338u;
label_2ee338:
    // 0x2ee338: 0x2e820005
    ctx->pc = 0x2ee338u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), 5));
label_2ee33c:
    // 0x2ee33c: 0x10400029
label_2ee340:
    if (ctx->pc == 0x2EE340u) {
        ctx->pc = 0x2EE340u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2EE344u;
        goto label_2ee344;
    }
    ctx->pc = 0x2EE33Cu;
    {
        const bool branch_taken_0x2ee33c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE340u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2ee33c) {
            ctx->pc = 0x2EE3E4u;
            goto label_2ee3e4;
        }
    }
    ctx->pc = 0x2EE344u;
label_2ee344:
    // 0x2ee344: 0x141880
    ctx->pc = 0x2ee344u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_2ee348:
    // 0x2ee348: 0x24429d80
    ctx->pc = 0x2ee348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942080));
label_2ee34c:
    // 0x2ee34c: 0x621821
    ctx->pc = 0x2ee34cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ee350:
    // 0x2ee350: 0x8c640000
    ctx->pc = 0x2ee350u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ee354:
    // 0x2ee354: 0x800008
label_2ee358:
    if (ctx->pc == 0x2EE358u) {
        ctx->pc = 0x2EE35Cu;
        goto label_2ee35c;
    }
    ctx->pc = 0x2EE354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE2A8u: goto label_2ee2a8;
            case 0x2EE2ACu: goto label_2ee2ac;
            case 0x2EE2B0u: goto label_2ee2b0;
            case 0x2EE2B4u: goto label_2ee2b4;
            case 0x2EE2B8u: goto label_2ee2b8;
            case 0x2EE2BCu: goto label_2ee2bc;
            case 0x2EE2C0u: goto label_2ee2c0;
            case 0x2EE2C4u: goto label_2ee2c4;
            case 0x2EE2C8u: goto label_2ee2c8;
            case 0x2EE2CCu: goto label_2ee2cc;
            case 0x2EE2D0u: goto label_2ee2d0;
            case 0x2EE2D4u: goto label_2ee2d4;
            case 0x2EE2D8u: goto label_2ee2d8;
            case 0x2EE2DCu: goto label_2ee2dc;
            case 0x2EE2E0u: goto label_2ee2e0;
            case 0x2EE2E4u: goto label_2ee2e4;
            case 0x2EE2E8u: goto label_2ee2e8;
            case 0x2EE2ECu: goto label_2ee2ec;
            case 0x2EE2F0u: goto label_2ee2f0;
            case 0x2EE2F4u: goto label_2ee2f4;
            case 0x2EE2F8u: goto label_2ee2f8;
            case 0x2EE2FCu: goto label_2ee2fc;
            case 0x2EE300u: goto label_2ee300;
            case 0x2EE304u: goto label_2ee304;
            case 0x2EE308u: goto label_2ee308;
            case 0x2EE30Cu: goto label_2ee30c;
            case 0x2EE310u: goto label_2ee310;
            case 0x2EE314u: goto label_2ee314;
            case 0x2EE318u: goto label_2ee318;
            case 0x2EE31Cu: goto label_2ee31c;
            case 0x2EE320u: goto label_2ee320;
            case 0x2EE324u: goto label_2ee324;
            case 0x2EE328u: goto label_2ee328;
            case 0x2EE32Cu: goto label_2ee32c;
            case 0x2EE330u: goto label_2ee330;
            case 0x2EE334u: goto label_2ee334;
            case 0x2EE338u: goto label_2ee338;
            case 0x2EE33Cu: goto label_2ee33c;
            case 0x2EE340u: goto label_2ee340;
            case 0x2EE344u: goto label_2ee344;
            case 0x2EE348u: goto label_2ee348;
            case 0x2EE34Cu: goto label_2ee34c;
            case 0x2EE350u: goto label_2ee350;
            case 0x2EE354u: goto label_2ee354;
            case 0x2EE358u: goto label_2ee358;
            case 0x2EE35Cu: goto label_2ee35c;
            case 0x2EE360u: goto label_2ee360;
            case 0x2EE364u: goto label_2ee364;
            case 0x2EE368u: goto label_2ee368;
            case 0x2EE36Cu: goto label_2ee36c;
            case 0x2EE370u: goto label_2ee370;
            case 0x2EE374u: goto label_2ee374;
            case 0x2EE378u: goto label_2ee378;
            case 0x2EE37Cu: goto label_2ee37c;
            case 0x2EE380u: goto label_2ee380;
            case 0x2EE384u: goto label_2ee384;
            case 0x2EE388u: goto label_2ee388;
            case 0x2EE38Cu: goto label_2ee38c;
            case 0x2EE390u: goto label_2ee390;
            case 0x2EE394u: goto label_2ee394;
            case 0x2EE398u: goto label_2ee398;
            case 0x2EE39Cu: goto label_2ee39c;
            case 0x2EE3A0u: goto label_2ee3a0;
            case 0x2EE3A4u: goto label_2ee3a4;
            case 0x2EE3A8u: goto label_2ee3a8;
            case 0x2EE3ACu: goto label_2ee3ac;
            case 0x2EE3B0u: goto label_2ee3b0;
            case 0x2EE3B4u: goto label_2ee3b4;
            case 0x2EE3B8u: goto label_2ee3b8;
            case 0x2EE3BCu: goto label_2ee3bc;
            case 0x2EE3C0u: goto label_2ee3c0;
            case 0x2EE3C4u: goto label_2ee3c4;
            case 0x2EE3C8u: goto label_2ee3c8;
            case 0x2EE3CCu: goto label_2ee3cc;
            case 0x2EE3D0u: goto label_2ee3d0;
            case 0x2EE3D4u: goto label_2ee3d4;
            case 0x2EE3D8u: goto label_2ee3d8;
            case 0x2EE3DCu: goto label_2ee3dc;
            case 0x2EE3E0u: goto label_2ee3e0;
            case 0x2EE3E4u: goto label_2ee3e4;
            case 0x2EE3E8u: goto label_2ee3e8;
            case 0x2EE3ECu: goto label_2ee3ec;
            case 0x2EE3F0u: goto label_2ee3f0;
            case 0x2EE3F4u: goto label_2ee3f4;
            case 0x2EE3F8u: goto label_2ee3f8;
            case 0x2EE3FCu: goto label_2ee3fc;
            case 0x2EE400u: goto label_2ee400;
            case 0x2EE404u: goto label_2ee404;
            case 0x2EE408u: goto label_2ee408;
            case 0x2EE40Cu: goto label_2ee40c;
            case 0x2EE410u: goto label_2ee410;
            case 0x2EE414u: goto label_2ee414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EE35Cu;
label_2ee35c:
    // 0x2ee35c: 0xc0bb9bc
label_2ee360:
    if (ctx->pc == 0x2EE360u) {
        ctx->pc = 0x2EE360u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EE364u;
        goto label_2ee364;
    }
    ctx->pc = 0x2EE35Cu;
    SET_GPR_U32(ctx, 31, 0x2EE364u);
    ctx->pc = 0x2EE360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x2ee6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE364u; }
    }
    if (ctx->pc != 0x2EE364u) { return; }
    ctx->pc = 0x2EE364u;
label_2ee364:
    // 0x2ee364: 0x24030001
    ctx->pc = 0x2ee364u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2ee368:
    // 0x2ee368: 0x1000001e
label_2ee36c:
    if (ctx->pc == 0x2EE36Cu) {
        ctx->pc = 0x2EE36Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2EE370u;
        goto label_2ee370;
    }
    ctx->pc = 0x2EE368u;
    {
        const bool branch_taken_0x2ee368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE36Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x2ee368) {
            ctx->pc = 0x2EE3E4u;
            goto label_2ee3e4;
        }
    }
    ctx->pc = 0x2EE370u;
label_2ee370:
    // 0x2ee370: 0xae0000a8
    ctx->pc = 0x2ee370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_2ee374:
    // 0x2ee374: 0x240202d
    ctx->pc = 0x2ee374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ee378:
    // 0x2ee378: 0xae0000a4
    ctx->pc = 0x2ee378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_2ee37c:
    // 0x2ee37c: 0x282d
    ctx->pc = 0x2ee37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee380:
    // 0x2ee380: 0xae0000a0
    ctx->pc = 0x2ee380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_2ee384:
    // 0x2ee384: 0xc0bb950
label_2ee388:
    if (ctx->pc == 0x2EE388u) {
        ctx->pc = 0x2EE388u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x2EE38Cu;
        goto label_2ee38c;
    }
    ctx->pc = 0x2EE384u;
    SET_GPR_U32(ctx, 31, 0x2EE38Cu);
    ctx->pc = 0x2EE388u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->pc = 0x2EE540u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x2ee540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE38Cu; }
    }
    if (ctx->pc != 0x2EE38Cu) { return; }
    ctx->pc = 0x2EE38Cu;
label_2ee38c:
    // 0x2ee38c: 0x8e0300a0
    ctx->pc = 0x2ee38cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2ee390:
    // 0x2ee390: 0x40982d
    ctx->pc = 0x2ee390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee394:
    // 0x2ee394: 0x24630001
    ctx->pc = 0x2ee394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ee398:
    // 0x2ee398: 0x10000012
label_2ee39c:
    if (ctx->pc == 0x2EE39Cu) {
        ctx->pc = 0x2EE39Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x2EE3A0u;
        goto label_2ee3a0;
    }
    ctx->pc = 0x2EE398u;
    {
        const bool branch_taken_0x2ee398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE39Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        if (branch_taken_0x2ee398) {
            ctx->pc = 0x2EE3E4u;
            goto label_2ee3e4;
        }
    }
    ctx->pc = 0x2EE3A0u;
label_2ee3a0:
    // 0x2ee3a0: 0x8e0500a4
    ctx->pc = 0x2ee3a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_2ee3a4:
    // 0x2ee3a4: 0x240202d
    ctx->pc = 0x2ee3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ee3a8:
    // 0x2ee3a8: 0xc0bb950
label_2ee3ac:
    if (ctx->pc == 0x2EE3ACu) {
        ctx->pc = 0x2EE3ACu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x2EE3B0u;
        goto label_2ee3b0;
    }
    ctx->pc = 0x2EE3A8u;
    SET_GPR_U32(ctx, 31, 0x2EE3B0u);
    ctx->pc = 0x2EE3ACu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->pc = 0x2EE540u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x2ee540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE3B0u; }
    }
    if (ctx->pc != 0x2EE3B0u) { return; }
    ctx->pc = 0x2EE3B0u;
label_2ee3b0:
    // 0x2ee3b0: 0x8e0300a4
    ctx->pc = 0x2ee3b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_2ee3b4:
    // 0x2ee3b4: 0x40982d
    ctx->pc = 0x2ee3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee3b8:
    // 0x2ee3b8: 0x24630001
    ctx->pc = 0x2ee3b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ee3bc:
    // 0x2ee3bc: 0x10000009
label_2ee3c0:
    if (ctx->pc == 0x2EE3C0u) {
        ctx->pc = 0x2EE3C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x2EE3C4u;
        goto label_2ee3c4;
    }
    ctx->pc = 0x2EE3BCu;
    {
        const bool branch_taken_0x2ee3bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE3C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        if (branch_taken_0x2ee3bc) {
            ctx->pc = 0x2EE3E4u;
            goto label_2ee3e4;
        }
    }
    ctx->pc = 0x2EE3C4u;
label_2ee3c4:
    // 0x2ee3c4: 0x8e0500a8
    ctx->pc = 0x2ee3c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_2ee3c8:
    // 0x2ee3c8: 0x240202d
    ctx->pc = 0x2ee3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ee3cc:
    // 0x2ee3cc: 0xc0bb950
label_2ee3d0:
    if (ctx->pc == 0x2EE3D0u) {
        ctx->pc = 0x2EE3D0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->pc = 0x2EE3D4u;
        goto label_2ee3d4;
    }
    ctx->pc = 0x2EE3CCu;
    SET_GPR_U32(ctx, 31, 0x2EE3D4u);
    ctx->pc = 0x2EE3D0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->pc = 0x2EE540u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x2ee540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE3D4u; }
    }
    if (ctx->pc != 0x2EE3D4u) { return; }
    ctx->pc = 0x2EE3D4u;
label_2ee3d4:
    // 0x2ee3d4: 0x8e0300a8
    ctx->pc = 0x2ee3d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_2ee3d8:
    // 0x2ee3d8: 0x40982d
    ctx->pc = 0x2ee3d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ee3dc:
    // 0x2ee3dc: 0x24630001
    ctx->pc = 0x2ee3dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2ee3e0:
    // 0x2ee3e0: 0xae0300a8
    ctx->pc = 0x2ee3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_2ee3e4:
    // 0x2ee3e4: 0x8ea238c0
    ctx->pc = 0x2ee3e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 14528)));
label_2ee3e8:
    // 0x2ee3e8: 0x1040ffc7
label_2ee3ec:
    if (ctx->pc == 0x2EE3ECu) {
        ctx->pc = 0x2EE3ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2EE3F0u;
        goto label_2ee3f0;
    }
    ctx->pc = 0x2EE3E8u;
    {
        const bool branch_taken_0x2ee3e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE3ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2ee3e8) {
            ctx->pc = 0x2EE308u;
            goto label_2ee308;
        }
    }
    ctx->pc = 0x2EE3F0u;
label_2ee3f0:
    // 0x2ee3f0: 0x24020001
    ctx->pc = 0x2ee3f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2ee3f4:
    // 0x2ee3f4: 0xdfbf0060
    ctx->pc = 0x2ee3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ee3f8:
    // 0x2ee3f8: 0xdfb50050
    ctx->pc = 0x2ee3f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ee3fc:
    // 0x2ee3fc: 0xdfb40040
    ctx->pc = 0x2ee3fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ee400:
    // 0x2ee400: 0xdfb30030
    ctx->pc = 0x2ee400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ee404:
    // 0x2ee404: 0xdfb20020
    ctx->pc = 0x2ee404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ee408:
    // 0x2ee408: 0xdfb10010
    ctx->pc = 0x2ee408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ee40c:
    // 0x2ee40c: 0xdfb00000
    ctx->pc = 0x2ee40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee410:
    // 0x2ee410: 0x3e00008
label_2ee414:
    if (ctx->pc == 0x2EE414u) {
        ctx->pc = 0x2EE414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2EE418u;
        goto label_fallthrough_0x2ee410;
    }
    ctx->pc = 0x2EE410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE2A8u: goto label_2ee2a8;
            case 0x2EE2ACu: goto label_2ee2ac;
            case 0x2EE2B0u: goto label_2ee2b0;
            case 0x2EE2B4u: goto label_2ee2b4;
            case 0x2EE2B8u: goto label_2ee2b8;
            case 0x2EE2BCu: goto label_2ee2bc;
            case 0x2EE2C0u: goto label_2ee2c0;
            case 0x2EE2C4u: goto label_2ee2c4;
            case 0x2EE2C8u: goto label_2ee2c8;
            case 0x2EE2CCu: goto label_2ee2cc;
            case 0x2EE2D0u: goto label_2ee2d0;
            case 0x2EE2D4u: goto label_2ee2d4;
            case 0x2EE2D8u: goto label_2ee2d8;
            case 0x2EE2DCu: goto label_2ee2dc;
            case 0x2EE2E0u: goto label_2ee2e0;
            case 0x2EE2E4u: goto label_2ee2e4;
            case 0x2EE2E8u: goto label_2ee2e8;
            case 0x2EE2ECu: goto label_2ee2ec;
            case 0x2EE2F0u: goto label_2ee2f0;
            case 0x2EE2F4u: goto label_2ee2f4;
            case 0x2EE2F8u: goto label_2ee2f8;
            case 0x2EE2FCu: goto label_2ee2fc;
            case 0x2EE300u: goto label_2ee300;
            case 0x2EE304u: goto label_2ee304;
            case 0x2EE308u: goto label_2ee308;
            case 0x2EE30Cu: goto label_2ee30c;
            case 0x2EE310u: goto label_2ee310;
            case 0x2EE314u: goto label_2ee314;
            case 0x2EE318u: goto label_2ee318;
            case 0x2EE31Cu: goto label_2ee31c;
            case 0x2EE320u: goto label_2ee320;
            case 0x2EE324u: goto label_2ee324;
            case 0x2EE328u: goto label_2ee328;
            case 0x2EE32Cu: goto label_2ee32c;
            case 0x2EE330u: goto label_2ee330;
            case 0x2EE334u: goto label_2ee334;
            case 0x2EE338u: goto label_2ee338;
            case 0x2EE33Cu: goto label_2ee33c;
            case 0x2EE340u: goto label_2ee340;
            case 0x2EE344u: goto label_2ee344;
            case 0x2EE348u: goto label_2ee348;
            case 0x2EE34Cu: goto label_2ee34c;
            case 0x2EE350u: goto label_2ee350;
            case 0x2EE354u: goto label_2ee354;
            case 0x2EE358u: goto label_2ee358;
            case 0x2EE35Cu: goto label_2ee35c;
            case 0x2EE360u: goto label_2ee360;
            case 0x2EE364u: goto label_2ee364;
            case 0x2EE368u: goto label_2ee368;
            case 0x2EE36Cu: goto label_2ee36c;
            case 0x2EE370u: goto label_2ee370;
            case 0x2EE374u: goto label_2ee374;
            case 0x2EE378u: goto label_2ee378;
            case 0x2EE37Cu: goto label_2ee37c;
            case 0x2EE380u: goto label_2ee380;
            case 0x2EE384u: goto label_2ee384;
            case 0x2EE388u: goto label_2ee388;
            case 0x2EE38Cu: goto label_2ee38c;
            case 0x2EE390u: goto label_2ee390;
            case 0x2EE394u: goto label_2ee394;
            case 0x2EE398u: goto label_2ee398;
            case 0x2EE39Cu: goto label_2ee39c;
            case 0x2EE3A0u: goto label_2ee3a0;
            case 0x2EE3A4u: goto label_2ee3a4;
            case 0x2EE3A8u: goto label_2ee3a8;
            case 0x2EE3ACu: goto label_2ee3ac;
            case 0x2EE3B0u: goto label_2ee3b0;
            case 0x2EE3B4u: goto label_2ee3b4;
            case 0x2EE3B8u: goto label_2ee3b8;
            case 0x2EE3BCu: goto label_2ee3bc;
            case 0x2EE3C0u: goto label_2ee3c0;
            case 0x2EE3C4u: goto label_2ee3c4;
            case 0x2EE3C8u: goto label_2ee3c8;
            case 0x2EE3CCu: goto label_2ee3cc;
            case 0x2EE3D0u: goto label_2ee3d0;
            case 0x2EE3D4u: goto label_2ee3d4;
            case 0x2EE3D8u: goto label_2ee3d8;
            case 0x2EE3DCu: goto label_2ee3dc;
            case 0x2EE3E0u: goto label_2ee3e0;
            case 0x2EE3E4u: goto label_2ee3e4;
            case 0x2EE3E8u: goto label_2ee3e8;
            case 0x2EE3ECu: goto label_2ee3ec;
            case 0x2EE3F0u: goto label_2ee3f0;
            case 0x2EE3F4u: goto label_2ee3f4;
            case 0x2EE3F8u: goto label_2ee3f8;
            case 0x2EE3FCu: goto label_2ee3fc;
            case 0x2EE400u: goto label_2ee400;
            case 0x2EE404u: goto label_2ee404;
            case 0x2EE408u: goto label_2ee408;
            case 0x2EE40Cu: goto label_2ee40c;
            case 0x2EE410u: goto label_2ee410;
            case 0x2EE414u: goto label_2ee414;
            default: break;
        }
        return;
    }
label_fallthrough_0x2ee410:
    ctx->pc = 0x2EE418u;
}
