#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: copy2area
// Address: 0x2dd998 - 0x2ddac8
void copy2area_0x2dd998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd998u;

    // 0x2dd998: 0x27bdff70
    ctx->pc = 0x2dd998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dd99c: 0xffbf0080
    ctx->pc = 0x2dd99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2dd9a0: 0xffb70070
    ctx->pc = 0x2dd9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2dd9a4: 0xffb60060
    ctx->pc = 0x2dd9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2dd9a8: 0xffb50050
    ctx->pc = 0x2dd9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2dd9ac: 0xffb40040
    ctx->pc = 0x2dd9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2dd9b0: 0xffb30030
    ctx->pc = 0x2dd9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2dd9b4: 0xffb20020
    ctx->pc = 0x2dd9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dd9b8: 0xffb10010
    ctx->pc = 0x2dd9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dd9bc: 0xffb00000
    ctx->pc = 0x2dd9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd9c0: 0x80a02d
    ctx->pc = 0x2dd9c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9c4: 0xa0802d
    ctx->pc = 0x2dd9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9c8: 0xc0b82d
    ctx->pc = 0x2dd9c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9cc: 0x100982d
    ctx->pc = 0x2dd9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9d0: 0x120882d
    ctx->pc = 0x2dd9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9d4: 0x140b02d
    ctx->pc = 0x2dd9d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9d8: 0x160a82d
    ctx->pc = 0x2dd9d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9dc: 0x2073821
    ctx->pc = 0x2dd9dcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2dd9e0: 0x2351021
    ctx->pc = 0x2dd9e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x2dd9e4: 0xe2382a
    ctx->pc = 0x2dd9e4u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x2dd9e8: 0x14e0002c
    ctx->pc = 0x2DD9E8u;
    {
        const bool branch_taken_0x2dd9e8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD9ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9e8) {
            ctx->pc = 0x2DDA9Cu;
            goto label_2dda9c;
        }
    }
    ctx->pc = 0x2DD9F0u;
    // 0x2dd9f0: 0x230102a
    ctx->pc = 0x2dd9f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x2dd9f4: 0x14400010
    ctx->pc = 0x2DD9F4u;
    {
        const bool branch_taken_0x2dd9f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DD9F8u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        if (branch_taken_0x2dd9f4) {
            ctx->pc = 0x2DDA38u;
            goto label_2dda38;
        }
    }
    ctx->pc = 0x2DD9FCu;
    // 0x2dd9fc: 0x280202d
    ctx->pc = 0x2dd9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda00: 0x260282d
    ctx->pc = 0x2dda00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda04: 0xc0bec59
    ctx->pc = 0x2DDA04u;
    SET_GPR_U32(ctx, 31, 0x2DDA0Cu);
    ctx->pc = 0x2DDA08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA0Cu; }
    }
    if (ctx->pc != 0x2DDA0Cu) { return; }
    ctx->pc = 0x2DDA0Cu;
    // 0x2dda0c: 0x2e0202d
    ctx->pc = 0x2dda0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda10: 0x2702821
    ctx->pc = 0x2dda10u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2dda14: 0xc0bec59
    ctx->pc = 0x2DDA14u;
    SET_GPR_U32(ctx, 31, 0x2DDA1Cu);
    ctx->pc = 0x2DDA18u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA1Cu; }
    }
    if (ctx->pc != 0x2DDA1Cu) { return; }
    ctx->pc = 0x2DDA1Cu;
    // 0x2dda1c: 0x2f12021
    ctx->pc = 0x2dda1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x2dda20: 0x902023
    ctx->pc = 0x2dda20u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2dda24: 0x2c0282d
    ctx->pc = 0x2dda24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda28: 0xc0bec59
    ctx->pc = 0x2DDA28u;
    SET_GPR_U32(ctx, 31, 0x2DDA30u);
    ctx->pc = 0x2DDA2Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA30u; }
    }
    if (ctx->pc != 0x2DDA30u) { return; }
    ctx->pc = 0x2DDA30u;
    // 0x2dda30: 0x1000001a
    ctx->pc = 0x2DDA30u;
    {
        const bool branch_taken_0x2dda30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DDA34u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        if (branch_taken_0x2dda30) {
            ctx->pc = 0x2DDA9Cu;
            goto label_2dda9c;
        }
    }
    ctx->pc = 0x2DDA38u;
label_2dda38:
    // 0x2dda38: 0x2b2102a
    ctx->pc = 0x2dda38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 18)));
    // 0x2dda3c: 0x1440000f
    ctx->pc = 0x2DDA3Cu;
    {
        const bool branch_taken_0x2dda3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DDA40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dda3c) {
            ctx->pc = 0x2DDA7Cu;
            goto label_2dda7c;
        }
    }
    ctx->pc = 0x2DDA44u;
    // 0x2dda44: 0x260282d
    ctx->pc = 0x2dda44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda48: 0xc0bec59
    ctx->pc = 0x2DDA48u;
    SET_GPR_U32(ctx, 31, 0x2DDA50u);
    ctx->pc = 0x2DDA4Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA50u; }
    }
    if (ctx->pc != 0x2DDA50u) { return; }
    ctx->pc = 0x2DDA50u;
    // 0x2dda50: 0x2912021
    ctx->pc = 0x2dda50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2dda54: 0x2c0282d
    ctx->pc = 0x2dda54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda58: 0xc0bec59
    ctx->pc = 0x2DDA58u;
    SET_GPR_U32(ctx, 31, 0x2DDA60u);
    ctx->pc = 0x2DDA5Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA60u; }
    }
    if (ctx->pc != 0x2DDA60u) { return; }
    ctx->pc = 0x2DDA60u;
    // 0x2dda60: 0x2d02821
    ctx->pc = 0x2dda60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2dda64: 0x2e0202d
    ctx->pc = 0x2dda64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda68: 0xb12823
    ctx->pc = 0x2dda68u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2dda6c: 0xc0bec59
    ctx->pc = 0x2DDA6Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA74u);
    ctx->pc = 0x2DDA70u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA74u; }
    }
    if (ctx->pc != 0x2DDA74u) { return; }
    ctx->pc = 0x2DDA74u;
    // 0x2dda74: 0x10000009
    ctx->pc = 0x2DDA74u;
    {
        const bool branch_taken_0x2dda74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DDA78u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        if (branch_taken_0x2dda74) {
            ctx->pc = 0x2DDA9Cu;
            goto label_2dda9c;
        }
    }
    ctx->pc = 0x2DDA7Cu;
label_2dda7c:
    // 0x2dda7c: 0x260282d
    ctx->pc = 0x2dda7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda80: 0xc0bec59
    ctx->pc = 0x2DDA80u;
    SET_GPR_U32(ctx, 31, 0x2DDA88u);
    ctx->pc = 0x2DDA84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA88u; }
    }
    if (ctx->pc != 0x2DDA88u) { return; }
    ctx->pc = 0x2DDA88u;
    // 0x2dda88: 0x2912021
    ctx->pc = 0x2dda88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2dda8c: 0x2c0282d
    ctx->pc = 0x2dda8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda90: 0xc0bec59
    ctx->pc = 0x2DDA90u;
    SET_GPR_U32(ctx, 31, 0x2DDA98u);
    ctx->pc = 0x2DDA94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDA98u; }
    }
    if (ctx->pc != 0x2DDA98u) { return; }
    ctx->pc = 0x2DDA98u;
    // 0x2dda98: 0x2351021
    ctx->pc = 0x2dda98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_2dda9c:
    // 0x2dda9c: 0xdfbf0080
    ctx->pc = 0x2dda9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ddaa0: 0xdfb70070
    ctx->pc = 0x2ddaa0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ddaa4: 0xdfb60060
    ctx->pc = 0x2ddaa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ddaa8: 0xdfb50050
    ctx->pc = 0x2ddaa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ddaac: 0xdfb40040
    ctx->pc = 0x2ddaacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddab0: 0xdfb30030
    ctx->pc = 0x2ddab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddab4: 0xdfb20020
    ctx->pc = 0x2ddab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddab8: 0xdfb10010
    ctx->pc = 0x2ddab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddabc: 0xdfb00000
    ctx->pc = 0x2ddabcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddac0: 0x3e00008
    ctx->pc = 0x2DDAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDAC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DDA38u: goto label_2dda38;
            case 0x2DDA7Cu: goto label_2dda7c;
            case 0x2DDA9Cu: goto label_2dda9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DDAC8u;
}
