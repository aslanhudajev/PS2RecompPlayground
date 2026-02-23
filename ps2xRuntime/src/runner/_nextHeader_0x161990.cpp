#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _nextHeader
// Address: 0x161990 - 0x161ab4
void _nextHeader_0x161990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_nextHeader");


    ctx->pc = 0x161990u;

    // 0x161990: 0x27bdff40
    ctx->pc = 0x161990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161994: 0xffbe00a0
    ctx->pc = 0x161994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x161998: 0xffb70090
    ctx->pc = 0x161998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x16199c: 0x3c1e0023
    ctx->pc = 0x16199cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)35 << 16));
    // 0x1619a0: 0xffb60080
    ctx->pc = 0x1619a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1619a4: 0x3c170023
    ctx->pc = 0x1619a4u;
    SET_GPR_U32(ctx, 23, ((uint32_t)35 << 16));
    // 0x1619a8: 0xffb50070
    ctx->pc = 0x1619a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1619ac: 0x241601b3
    ctx->pc = 0x1619acu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 435));
    // 0x1619b0: 0xffb40060
    ctx->pc = 0x1619b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1619b4: 0x24150005
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1619b8: 0xffb30050
    ctx->pc = 0x1619b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1619bc: 0x24140100
    ctx->pc = 0x1619bcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 256));
    // 0x1619c0: 0xffb20040
    ctx->pc = 0x1619c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1619c4: 0x241301b7
    ctx->pc = 0x1619c4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 439));
    // 0x1619c8: 0xffb10030
    ctx->pc = 0x1619c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1619cc: 0x241201b8
    ctx->pc = 0x1619ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 440));
    // 0x1619d0: 0xffb00020
    ctx->pc = 0x1619d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1619d4: 0x3c110023
    ctx->pc = 0x1619d4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x1619d8: 0xffbf00b0
    ctx->pc = 0x1619d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1619dc: 0x2410ffff
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1619e0:
    // 0x1619e0: 0xc05862e
    ctx->pc = 0x1619E0u;
    SET_GPR_U32(ctx, 31, 0x1619E8u);
    ctx->pc = 0x1618B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x1618b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619E8u; }
        else if (ctx->pc != 0x1619E8u) { ctx->pc = 0x1619E8u; }
    }
    if (ctx->pc != 0x1619E8u) { return; }
    ctx->pc = 0x1619E8u;
    // 0x1619e8: 0xc0585d4
    ctx->pc = 0x1619E8u;
    SET_GPR_U32(ctx, 31, 0x1619F0u);
    ctx->pc = 0x1619ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619F0u; }
        else if (ctx->pc != 0x1619F0u) { ctx->pc = 0x1619F0u; }
    }
    if (ctx->pc != 0x1619F0u) { return; }
    ctx->pc = 0x1619F0u;
    // 0x1619f0: 0x40182d
    ctx->pc = 0x1619f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619f4: 0x1076000d
    ctx->pc = 0x1619F4u;
    {
        const bool branch_taken_0x1619f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        ctx->pc = 0x1619F8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 436));
        if (branch_taken_0x1619f4) {
            ctx->pc = 0x161A2Cu;
            goto label_161a2c;
        }
    }
    ctx->pc = 0x1619FCu;
    // 0x1619fc: 0x10400005
    ctx->pc = 0x1619FCu;
    {
        const bool branch_taken_0x1619fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1619fc) {
            ctx->pc = 0x161A14u;
            goto label_161a14;
        }
    }
    ctx->pc = 0x161A04u;
    // 0x161a04: 0x10740011
    ctx->pc = 0x161A04u;
    {
        const bool branch_taken_0x161a04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        if (branch_taken_0x161a04) {
            ctx->pc = 0x161A4Cu;
            goto label_161a4c;
        }
    }
    ctx->pc = 0x161A0Cu;
    // 0x161a0c: 0x1000fff4
    ctx->pc = 0x161A0Cu;
    {
        const bool branch_taken_0x161a0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x161a0c) {
            ctx->pc = 0x1619E0u;
            goto label_1619e0;
        }
    }
    ctx->pc = 0x161A14u;
label_161a14:
    // 0x161a14: 0x1073001b
    ctx->pc = 0x161A14u;
    {
        const bool branch_taken_0x161a14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x161A18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x161a14) {
            ctx->pc = 0x161A84u;
            goto label_161a84;
        }
    }
    ctx->pc = 0x161A1Cu;
    // 0x161a1c: 0x10720007
    ctx->pc = 0x161A1Cu;
    {
        const bool branch_taken_0x161a1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        if (branch_taken_0x161a1c) {
            ctx->pc = 0x161A3Cu;
            goto label_161a3c;
        }
    }
    ctx->pc = 0x161A24u;
    // 0x161a24: 0x1000ffee
    ctx->pc = 0x161A24u;
    {
        const bool branch_taken_0x161a24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x161a24) {
            ctx->pc = 0x1619E0u;
            goto label_1619e0;
        }
    }
    ctx->pc = 0x161A2Cu;
label_161a2c:
    // 0x161a2c: 0xc059166
    ctx->pc = 0x161A2Cu;
    SET_GPR_U32(ctx, 31, 0x161A34u);
    ctx->pc = 0x164598u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sequenceHeader_0x164598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A34u; }
        else if (ctx->pc != 0x161A34u) { ctx->pc = 0x161A34u; }
    }
    if (ctx->pc != 0x161A34u) { return; }
    ctx->pc = 0x161A34u;
    // 0x161a34: 0x1000ffea
    ctx->pc = 0x161A34u;
    {
        const bool branch_taken_0x161a34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x161a34) {
            ctx->pc = 0x1619E0u;
            goto label_1619e0;
        }
    }
    ctx->pc = 0x161A3Cu;
label_161a3c:
    // 0x161a3c: 0xc0587e0
    ctx->pc = 0x161A3Cu;
    SET_GPR_U32(ctx, 31, 0x161A44u);
    ctx->pc = 0x161F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        _groupOfPicturesHeader_0x161f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A44u; }
        else if (ctx->pc != 0x161A44u) { ctx->pc = 0x161A44u; }
    }
    if (ctx->pc != 0x161A44u) { return; }
    ctx->pc = 0x161A44u;
    // 0x161a44: 0x1000ffe6
    ctx->pc = 0x161A44u;
    {
        const bool branch_taken_0x161a44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x161a44) {
            ctx->pc = 0x1619E0u;
            goto label_1619e0;
        }
    }
    ctx->pc = 0x161A4Cu;
label_161a4c:
    // 0x161a4c: 0xc0586ae
    ctx->pc = 0x161A4Cu;
    SET_GPR_U32(ctx, 31, 0x161A54u);
    ctx->pc = 0x161AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pictureHeader_0x161ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A54u; }
        else if (ctx->pc != 0x161A54u) { ctx->pc = 0x161A54u; }
    }
    if (ctx->pc != 0x161A54u) { return; }
    ctx->pc = 0x161A54u;
    // 0x161a54: 0x8e24a21c
    ctx->pc = 0x161a54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294943260)));
    // 0x161a58: 0x3a0282d
    ctx->pc = 0x161a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a5c: 0xafb50000
    ctx->pc = 0x161a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x161a60: 0xffb00010
    ctx->pc = 0x161a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x161a64: 0xc058eec
    ctx->pc = 0x161A64u;
    SET_GPR_U32(ctx, 31, 0x161A6Cu);
    ctx->pc = 0x161A68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->pc = 0x163BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x163bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A6Cu; }
        else if (ctx->pc != 0x161A6Cu) { ctx->pc = 0x161A6Cu; }
    }
    if (ctx->pc != 0x161A6Cu) { return; }
    ctx->pc = 0x161A6Cu;
    // 0x161a6c: 0xdfa30008
    ctx->pc = 0x161a6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161a70: 0xdfa20010
    ctx->pc = 0x161a70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161a74: 0xfee3aac8
    ctx->pc = 0x161a74u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294945480), GPR_U64(ctx, 3));
    // 0x161a78: 0xffc2aad0
    ctx->pc = 0x161a78u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294945488), GPR_U64(ctx, 2));
    // 0x161a7c: 0x3c030023
    ctx->pc = 0x161a7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x161a80: 0x8c62a3bc
    ctx->pc = 0x161a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943676)));
label_161a84:
    // 0x161a84: 0xdfbf00b0
    ctx->pc = 0x161a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x161a88: 0xdfbe00a0
    ctx->pc = 0x161a88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x161a8c: 0xdfb70090
    ctx->pc = 0x161a8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x161a90: 0xdfb60080
    ctx->pc = 0x161a90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161a94: 0xdfb50070
    ctx->pc = 0x161a94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161a98: 0xdfb40060
    ctx->pc = 0x161a98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x161a9c: 0xdfb30050
    ctx->pc = 0x161a9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161aa0: 0xdfb20040
    ctx->pc = 0x161aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161aa4: 0xdfb10030
    ctx->pc = 0x161aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161aa8: 0xdfb00020
    ctx->pc = 0x161aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161aac: 0x3e00008
    ctx->pc = 0x161AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161AB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1619E0u: goto label_1619e0;
            case 0x161A14u: goto label_161a14;
            case 0x161A2Cu: goto label_161a2c;
            case 0x161A3Cu: goto label_161a3c;
            case 0x161A4Cu: goto label_161a4c;
            case 0x161A84u: goto label_161a84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161AB4u;
}
