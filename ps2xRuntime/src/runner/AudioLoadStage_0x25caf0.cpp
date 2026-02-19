#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLoadStage
// Address: 0x25caf0 - 0x25cc44
void AudioLoadStage_0x25caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25caf0u;

    // 0x25caf0: 0x27bdff40
    ctx->pc = 0x25caf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x25caf4: 0xffbf00b0
    ctx->pc = 0x25caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x25caf8: 0xffbe00a0
    ctx->pc = 0x25caf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x25cafc: 0xffb70090
    ctx->pc = 0x25cafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x25cb00: 0xffb60080
    ctx->pc = 0x25cb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x25cb04: 0xffb50070
    ctx->pc = 0x25cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x25cb08: 0xffb40060
    ctx->pc = 0x25cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x25cb0c: 0xffb30050
    ctx->pc = 0x25cb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x25cb10: 0xffb20040
    ctx->pc = 0x25cb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x25cb14: 0xffb10030
    ctx->pc = 0x25cb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x25cb18: 0xffb00020
    ctx->pc = 0x25cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x25cb1c: 0xafa40010
    ctx->pc = 0x25cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25cb20: 0xa0982d
    ctx->pc = 0x25cb20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb24: 0x24120001
    ctx->pc = 0x25cb24u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25cb28: 0x24020002
    ctx->pc = 0x25cb28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25cb2c: 0x16600003
    ctx->pc = 0x25CB2Cu;
    {
        const bool branch_taken_0x25cb2c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x25CB30u;
        if (GPR_U32(ctx, 19) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
        if (branch_taken_0x25cb2c) {
            ctx->pc = 0x25CB3Cu;
            goto label_25cb3c;
        }
    }
    ctx->pc = 0x25CB34u;
    // 0x25cb34: 0xc088bc0
    ctx->pc = 0x25CB34u;
    SET_GPR_U32(ctx, 31, 0x25CB3Cu);
    ctx->pc = 0x222F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueEmpty_0x222f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB3Cu; }
    }
    if (ctx->pc != 0x25CB3Cu) { return; }
    ctx->pc = 0x25CB3Cu;
label_25cb3c:
    // 0x25cb3c: 0x882d
    ctx->pc = 0x25cb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb40: 0x3c020032
    ctx->pc = 0x25cb40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25cb44: 0x245e1bc0
    ctx->pc = 0x25cb44u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25cb48: 0x24172b00
    ctx->pc = 0x25cb48u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25cb4c: 0x24160002
    ctx->pc = 0x25cb4cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25cb50: 0x3c15003b
    ctx->pc = 0x25cb50u;
    SET_GPR_U32(ctx, 21, ((uint32_t)59 << 16));
    // 0x25cb54: 0x3c020032
    ctx->pc = 0x25cb54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25cb58: 0x24541428
    ctx->pc = 0x25cb58u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 5160));
    // 0x25cb5c: 0x2371018
    ctx->pc = 0x25cb5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_25cb60:
    // 0x25cb60: 0x5e8021
    ctx->pc = 0x25cb60u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x25cb64: 0x8e0200fc
    ctx->pc = 0x25cb64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x25cb68: 0x5040000d
    ctx->pc = 0x25CB68u;
    {
        const bool branch_taken_0x25cb68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25cb68) {
            ctx->pc = 0x25CB6Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x25CBA0u;
            goto label_25cba0;
        }
    }
    ctx->pc = 0x25CB70u;
    // 0x25cb70: 0x1056000a
    ctx->pc = 0x25CB70u;
    {
        const bool branch_taken_0x25cb70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 22));
        ctx->pc = 0x25CB74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25cb70) {
            ctx->pc = 0x25CB9Cu;
            goto label_25cb9c;
        }
    }
    ctx->pc = 0x25CB78u;
    // 0x25cb78: 0x26a59230
    ctx->pc = 0x25cb78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 4294939184));
    // 0x25cb7c: 0xc0b6252
    ctx->pc = 0x25CB7Cu;
    SET_GPR_U32(ctx, 31, 0x25CB84u);
    ctx->pc = 0x25CB80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB84u; }
    }
    if (ctx->pc != 0x25CB84u) { return; }
    ctx->pc = 0x25CB84u;
    // 0x25cb84: 0x8e050008
    ctx->pc = 0x25cb84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25cb88: 0x52880
    ctx->pc = 0x25cb88u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x25cb8c: 0x3a0202d
    ctx->pc = 0x25cb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb90: 0xb42821
    ctx->pc = 0x25cb90u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x25cb94: 0xc08853a
    ctx->pc = 0x25CB94u;
    SET_GPR_U32(ctx, 31, 0x25CB9Cu);
    ctx->pc = 0x25CB98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2214E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioReplaceBank_0x2214e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB9Cu; }
    }
    if (ctx->pc != 0x25CB9Cu) { return; }
    ctx->pc = 0x25CB9Cu;
label_25cb9c:
    // 0x25cb9c: 0x26310001
    ctx->pc = 0x25cb9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_25cba0:
    // 0x25cba0: 0x2a220004
    ctx->pc = 0x25cba0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x25cba4: 0x1440ffee
    ctx->pc = 0x25CBA4u;
    {
        const bool branch_taken_0x25cba4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25CBA8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25cba4) {
            ctx->pc = 0x25CB60u;
            goto label_25cb60;
        }
    }
    ctx->pc = 0x25CBACu;
    // 0x25cbac: 0x3c04003b
    ctx->pc = 0x25cbacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x25cbb0: 0x24849240
    ctx->pc = 0x25cbb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939200));
    // 0x25cbb4: 0x8fa50010
    ctx->pc = 0x25cbb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cbb8: 0xc08853a
    ctx->pc = 0x25CBB8u;
    SET_GPR_U32(ctx, 31, 0x25CBC0u);
    ctx->pc = 0x25CBBCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2214E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioReplaceBank_0x2214e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBC0u; }
    }
    if (ctx->pc != 0x25CBC0u) { return; }
    ctx->pc = 0x25CBC0u;
    // 0x25cbc0: 0x3c020034
    ctx->pc = 0x25cbc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cbc4: 0x8c43e7f0
    ctx->pc = 0x25cbc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25cbc8: 0x2402000d
    ctx->pc = 0x25cbc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x25cbcc: 0x14620008
    ctx->pc = 0x25CBCCu;
    {
        const bool branch_taken_0x25cbcc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25CBD0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x25cbcc) {
            ctx->pc = 0x25CBF0u;
            goto label_25cbf0;
        }
    }
    ctx->pc = 0x25CBD4u;
    // 0x25cbd4: 0x24849248
    ctx->pc = 0x25cbd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939208));
    // 0x25cbd8: 0x3c05003b
    ctx->pc = 0x25cbd8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25cbdc: 0x24a59250
    ctx->pc = 0x25cbdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939216));
    // 0x25cbe0: 0xc08853a
    ctx->pc = 0x25CBE0u;
    SET_GPR_U32(ctx, 31, 0x25CBE8u);
    ctx->pc = 0x25CBE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2214E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioReplaceBank_0x2214e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CBE8u; }
    }
    if (ctx->pc != 0x25CBE8u) { return; }
    ctx->pc = 0x25CBE8u;
    // 0x25cbe8: 0x10000005
    ctx->pc = 0x25CBE8u;
    {
        const bool branch_taken_0x25cbe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25cbe8) {
            ctx->pc = 0x25CC00u;
            goto label_25cc00;
        }
    }
    ctx->pc = 0x25CBF0u;
label_25cbf0:
    // 0x25cbf0: 0x24849248
    ctx->pc = 0x25cbf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939208));
    // 0x25cbf4: 0x80282d
    ctx->pc = 0x25cbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cbf8: 0xc08853a
    ctx->pc = 0x25CBF8u;
    SET_GPR_U32(ctx, 31, 0x25CC00u);
    ctx->pc = 0x25CBFCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2214E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioReplaceBank_0x2214e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC00u; }
    }
    if (ctx->pc != 0x25CC00u) { return; }
    ctx->pc = 0x25CC00u;
label_25cc00:
    // 0x25cc00: 0x16600005
    ctx->pc = 0x25CC00u;
    {
        const bool branch_taken_0x25cc00 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x25CC04u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x25cc00) {
            ctx->pc = 0x25CC18u;
            goto label_25cc18;
        }
    }
    ctx->pc = 0x25CC08u;
label_25cc08:
    // 0x25cc08: 0xc088290
    ctx->pc = 0x25CC08u;
    SET_GPR_U32(ctx, 31, 0x25CC10u);
    ctx->pc = 0x25CC0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CC10u; }
    }
    if (ctx->pc != 0x25CC10u) { return; }
    ctx->pc = 0x25CC10u;
    // 0x25cc10: 0x1440fffd
    ctx->pc = 0x25CC10u;
    {
        const bool branch_taken_0x25cc10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25CC14u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x25cc10) {
            ctx->pc = 0x25CC08u;
            goto label_25cc08;
        }
    }
    ctx->pc = 0x25CC18u;
label_25cc18:
    // 0x25cc18: 0xdfbe00a0
    ctx->pc = 0x25cc18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25cc1c: 0xdfb70090
    ctx->pc = 0x25cc1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25cc20: 0xdfb60080
    ctx->pc = 0x25cc20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25cc24: 0xdfb50070
    ctx->pc = 0x25cc24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25cc28: 0xdfb40060
    ctx->pc = 0x25cc28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25cc2c: 0xdfb30050
    ctx->pc = 0x25cc2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cc30: 0xdfb20040
    ctx->pc = 0x25cc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cc34: 0xdfb10030
    ctx->pc = 0x25cc34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cc38: 0xdfb00020
    ctx->pc = 0x25cc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cc3c: 0x3e00008
    ctx->pc = 0x25CC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CC40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25CB3Cu: goto label_25cb3c;
            case 0x25CB60u: goto label_25cb60;
            case 0x25CB9Cu: goto label_25cb9c;
            case 0x25CBA0u: goto label_25cba0;
            case 0x25CBF0u: goto label_25cbf0;
            case 0x25CC00u: goto label_25cc00;
            case 0x25CC08u: goto label_25cc08;
            case 0x25CC18u: goto label_25cc18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25CC44u;
}
