#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _nextHeader
// Address: 0x1241b0 - 0x1242d4
void _nextHeader_0x1241b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1241b0u;

    // 0x1241b0: 0x27bdff40
    ctx->pc = 0x1241b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1241b4: 0xffbe00a0
    ctx->pc = 0x1241b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1241b8: 0xffb70090
    ctx->pc = 0x1241b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1241bc: 0x3c1e0017
    ctx->pc = 0x1241bcu;
    SET_GPR_S32(ctx, 30, ((uint32_t)23 << 16));
    // 0x1241c0: 0xffb60080
    ctx->pc = 0x1241c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1241c4: 0x3c170017
    ctx->pc = 0x1241c4u;
    SET_GPR_S32(ctx, 23, ((uint32_t)23 << 16));
    // 0x1241c8: 0xffb50070
    ctx->pc = 0x1241c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1241cc: 0x241601b3
    ctx->pc = 0x1241ccu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 435));
    // 0x1241d0: 0xffb40060
    ctx->pc = 0x1241d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1241d4: 0x24150005
    ctx->pc = 0x1241d4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1241d8: 0xffb30050
    ctx->pc = 0x1241d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1241dc: 0x24140100
    ctx->pc = 0x1241dcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1241e0: 0xffb20040
    ctx->pc = 0x1241e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1241e4: 0x241301b7
    ctx->pc = 0x1241e4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 439));
    // 0x1241e8: 0xffb10030
    ctx->pc = 0x1241e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1241ec: 0x241201b8
    ctx->pc = 0x1241ecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 440));
    // 0x1241f0: 0xffb00020
    ctx->pc = 0x1241f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1241f4: 0x3c110017
    ctx->pc = 0x1241f4u;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x1241f8: 0xffbf00b0
    ctx->pc = 0x1241f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1241fc: 0x2410ffff
    ctx->pc = 0x1241fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_124200:
    // 0x124200: 0xc049036
    ctx->pc = 0x124200u;
    SET_GPR_U32(ctx, 31, 0x124208u);
    ctx->pc = 0x1240D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1240d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124208u; }
    }
    if (ctx->pc != 0x124208u) { return; }
    ctx->pc = 0x124208u;
    // 0x124208: 0xc048fdc
    ctx->pc = 0x124208u;
    SET_GPR_U32(ctx, 31, 0x124210u);
    ctx->pc = 0x12420Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124210u; }
    }
    if (ctx->pc != 0x124210u) { return; }
    ctx->pc = 0x124210u;
    // 0x124210: 0x40182d
    ctx->pc = 0x124210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124214: 0x1076000d
    ctx->pc = 0x124214u;
    {
        const bool branch_taken_0x124214 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        ctx->pc = 0x124218u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 436));
        if (branch_taken_0x124214) {
            ctx->pc = 0x12424Cu;
            goto label_12424c;
        }
    }
    ctx->pc = 0x12421Cu;
    // 0x12421c: 0x10400005
    ctx->pc = 0x12421Cu;
    {
        const bool branch_taken_0x12421c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12421c) {
            ctx->pc = 0x124234u;
            goto label_124234;
        }
    }
    ctx->pc = 0x124224u;
    // 0x124224: 0x10740011
    ctx->pc = 0x124224u;
    {
        const bool branch_taken_0x124224 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        if (branch_taken_0x124224) {
            ctx->pc = 0x12426Cu;
            goto label_12426c;
        }
    }
    ctx->pc = 0x12422Cu;
    // 0x12422c: 0x1000fff4
    ctx->pc = 0x12422Cu;
    {
        const bool branch_taken_0x12422c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x12422c) {
            ctx->pc = 0x124200u;
            goto label_124200;
        }
    }
    ctx->pc = 0x124234u;
label_124234:
    // 0x124234: 0x1073001b
    ctx->pc = 0x124234u;
    {
        const bool branch_taken_0x124234 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x124238u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x124234) {
            ctx->pc = 0x1242A4u;
            goto label_1242a4;
        }
    }
    ctx->pc = 0x12423Cu;
    // 0x12423c: 0x10720007
    ctx->pc = 0x12423Cu;
    {
        const bool branch_taken_0x12423c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        if (branch_taken_0x12423c) {
            ctx->pc = 0x12425Cu;
            goto label_12425c;
        }
    }
    ctx->pc = 0x124244u;
    // 0x124244: 0x1000ffee
    ctx->pc = 0x124244u;
    {
        const bool branch_taken_0x124244 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x124244) {
            ctx->pc = 0x124200u;
            goto label_124200;
        }
    }
    ctx->pc = 0x12424Cu;
label_12424c:
    // 0x12424c: 0xc04805a
    ctx->pc = 0x12424Cu;
    SET_GPR_U32(ctx, 31, 0x124254u);
    ctx->pc = 0x120168u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sequenceHeader_0x120168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124254u; }
    }
    if (ctx->pc != 0x124254u) { return; }
    ctx->pc = 0x124254u;
    // 0x124254: 0x1000ffea
    ctx->pc = 0x124254u;
    {
        const bool branch_taken_0x124254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x124254) {
            ctx->pc = 0x124200u;
            goto label_124200;
        }
    }
    ctx->pc = 0x12425Cu;
label_12425c:
    // 0x12425c: 0xc0491e8
    ctx->pc = 0x12425Cu;
    SET_GPR_U32(ctx, 31, 0x124264u);
    ctx->pc = 0x1247A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _groupOfPicturesHeader_0x1247a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124264u; }
    }
    if (ctx->pc != 0x124264u) { return; }
    ctx->pc = 0x124264u;
    // 0x124264: 0x1000ffe6
    ctx->pc = 0x124264u;
    {
        const bool branch_taken_0x124264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x124264) {
            ctx->pc = 0x124200u;
            goto label_124200;
        }
    }
    ctx->pc = 0x12426Cu;
label_12426c:
    // 0x12426c: 0xc0490b6
    ctx->pc = 0x12426Cu;
    SET_GPR_U32(ctx, 31, 0x124274u);
    ctx->pc = 0x1242D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pictureHeader_0x1242d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124274u; }
    }
    if (ctx->pc != 0x124274u) { return; }
    ctx->pc = 0x124274u;
    // 0x124274: 0x8e2417bc
    ctx->pc = 0x124274u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 6076)));
    // 0x124278: 0x3a0282d
    ctx->pc = 0x124278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12427c: 0xafb50000
    ctx->pc = 0x12427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x124280: 0xffb00010
    ctx->pc = 0x124280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124284: 0xc047de0
    ctx->pc = 0x124284u;
    SET_GPR_U32(ctx, 31, 0x12428Cu);
    ctx->pc = 0x124288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->pc = 0x11F780u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x11f780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12428Cu; }
    }
    if (ctx->pc != 0x12428Cu) { return; }
    ctx->pc = 0x12428Cu;
    // 0x12428c: 0xdfa30008
    ctx->pc = 0x12428cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124290: 0xdfa20010
    ctx->pc = 0x124290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124294: 0xfee32088
    ctx->pc = 0x124294u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8328), GPR_U64(ctx, 3));
    // 0x124298: 0xffc22090
    ctx->pc = 0x124298u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8336), GPR_U64(ctx, 2));
    // 0x12429c: 0x3c030017
    ctx->pc = 0x12429cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x1242a0: 0x8c62197c
    ctx->pc = 0x1242a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 6524)));
label_1242a4:
    // 0x1242a4: 0xdfbf00b0
    ctx->pc = 0x1242a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1242a8: 0xdfbe00a0
    ctx->pc = 0x1242a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1242ac: 0xdfb70090
    ctx->pc = 0x1242acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1242b0: 0xdfb60080
    ctx->pc = 0x1242b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1242b4: 0xdfb50070
    ctx->pc = 0x1242b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1242b8: 0xdfb40060
    ctx->pc = 0x1242b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1242bc: 0xdfb30050
    ctx->pc = 0x1242bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1242c0: 0xdfb20040
    ctx->pc = 0x1242c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1242c4: 0xdfb10030
    ctx->pc = 0x1242c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1242c8: 0xdfb00020
    ctx->pc = 0x1242c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1242cc: 0x3e00008
    ctx->pc = 0x1242CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1242D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124200u: goto label_124200;
            case 0x124234u: goto label_124234;
            case 0x12424Cu: goto label_12424c;
            case 0x12425Cu: goto label_12425c;
            case 0x12426Cu: goto label_12426c;
            case 0x1242A4u: goto label_1242a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1242D4u;
}
