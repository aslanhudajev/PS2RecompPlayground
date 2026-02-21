#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncAddr
// Address: 0x2b62a8 - 0x2b635c
void efuncAddr_0x2b62a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b62a8u;

    // 0x2b62a8: 0x27bdffd0
    ctx->pc = 0x2b62a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b62ac: 0xffbf0020
    ctx->pc = 0x2b62acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b62b0: 0xffb10010
    ctx->pc = 0x2b62b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b62b4: 0xffb00000
    ctx->pc = 0x2b62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b62b8: 0x80802d
    ctx->pc = 0x2b62b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b62bc: 0x8e110000
    ctx->pc = 0x2b62bcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b62c0: 0x8e020004
    ctx->pc = 0x2b62c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b62c4: 0x80430006
    ctx->pc = 0x2b62c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b62c8: 0x24020071
    ctx->pc = 0x2b62c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 113));
    // 0x2b62cc: 0x1062000d
    ctx->pc = 0x2B62CCu;
    {
        const bool branch_taken_0x2b62cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B62D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x2b62cc) {
            ctx->pc = 0x2B6304u;
            goto label_2b6304;
        }
    }
    ctx->pc = 0x2B62D4u;
    // 0x2b62d4: 0x28620072
    ctx->pc = 0x2b62d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 114));
    // 0x2b62d8: 0x10400005
    ctx->pc = 0x2B62D8u;
    {
        const bool branch_taken_0x2b62d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B62DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 98));
        if (branch_taken_0x2b62d8) {
            ctx->pc = 0x2B62F0u;
            goto label_2b62f0;
        }
    }
    ctx->pc = 0x2B62E0u;
    // 0x2b62e0: 0x10620010
    ctx->pc = 0x2B62E0u;
    {
        const bool branch_taken_0x2b62e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b62e0) {
            ctx->pc = 0x2B6324u;
            goto label_2b6324;
        }
    }
    ctx->pc = 0x2B62E8u;
    // 0x2b62e8: 0x10000015
    ctx->pc = 0x2B62E8u;
    {
        const bool branch_taken_0x2b62e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B62ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2b62e8) {
            ctx->pc = 0x2B6340u;
            goto label_2b6340;
        }
    }
    ctx->pc = 0x2B62F0u;
label_2b62f0:
    // 0x2b62f0: 0x24020077
    ctx->pc = 0x2b62f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 119));
    // 0x2b62f4: 0x10620007
    ctx->pc = 0x2B62F4u;
    {
        const bool branch_taken_0x2b62f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b62f4) {
            ctx->pc = 0x2B6314u;
            goto label_2b6314;
        }
    }
    ctx->pc = 0x2B62FCu;
    // 0x2b62fc: 0x10000010
    ctx->pc = 0x2B62FCu;
    {
        const bool branch_taken_0x2b62fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6300u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2b62fc) {
            ctx->pc = 0x2B6340u;
            goto label_2b6340;
        }
    }
    ctx->pc = 0x2B6304u;
label_2b6304:
    // 0x2b6304: 0xc0ad1a2
    ctx->pc = 0x2B6304u;
    SET_GPR_U32(ctx, 31, 0x2B630Cu);
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B630Cu; }
    }
    if (ctx->pc != 0x2B630Cu) { return; }
    ctx->pc = 0x2B630Cu;
    // 0x2b630c: 0x10000007
    ctx->pc = 0x2B630Cu;
    {
        const bool branch_taken_0x2b630c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6310u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x2b630c) {
            ctx->pc = 0x2B632Cu;
            goto label_2b632c;
        }
    }
    ctx->pc = 0x2B6314u;
label_2b6314:
    // 0x2b6314: 0xc0ad1a2
    ctx->pc = 0x2B6314u;
    SET_GPR_U32(ctx, 31, 0x2B631Cu);
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B631Cu; }
    }
    if (ctx->pc != 0x2B631Cu) { return; }
    ctx->pc = 0x2B631Cu;
    // 0x2b631c: 0x10000003
    ctx->pc = 0x2B631Cu;
    {
        const bool branch_taken_0x2b631c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6320u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x2b631c) {
            ctx->pc = 0x2B632Cu;
            goto label_2b632c;
        }
    }
    ctx->pc = 0x2B6324u;
label_2b6324:
    // 0x2b6324: 0xc0ad1a2
    ctx->pc = 0x2B6324u;
    SET_GPR_U32(ctx, 31, 0x2B632Cu);
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B632Cu; }
    }
    if (ctx->pc != 0x2B632Cu) { return; }
    ctx->pc = 0x2B632Cu;
label_2b632c:
    // 0x2b632c: 0x3c031100
    ctx->pc = 0x2b632cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4352 << 16));
    // 0x2b6330: 0x3463c000
    ctx->pc = 0x2b6330u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49152));
    // 0x2b6334: 0x431021
    ctx->pc = 0x2b6334u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6338: 0xae220010
    ctx->pc = 0x2b6338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2b633c: 0x8e030000
    ctx->pc = 0x2b633cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b6340:
    // 0x2b6340: 0x24020001
    ctx->pc = 0x2b6340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6344: 0xac620000
    ctx->pc = 0x2b6344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2b6348: 0xdfbf0020
    ctx->pc = 0x2b6348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b634c: 0xdfb10010
    ctx->pc = 0x2b634cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6350: 0xdfb00000
    ctx->pc = 0x2b6350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6354: 0x3e00008
    ctx->pc = 0x2B6354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6358u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B62F0u: goto label_2b62f0;
            case 0x2B6304u: goto label_2b6304;
            case 0x2B6314u: goto label_2b6314;
            case 0x2B6324u: goto label_2b6324;
            case 0x2B632Cu: goto label_2b632c;
            case 0x2B6340u: goto label_2b6340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B635Cu;
}
