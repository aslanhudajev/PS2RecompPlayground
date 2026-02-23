#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_stricmp
// Address: 0x177dd8 - 0x177e78
void dvci_stricmp_0x177dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_stricmp");


    ctx->pc = 0x177dd8u;

    // 0x177dd8: 0x27bdffa0
    ctx->pc = 0x177dd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x177ddc: 0xffb40040
    ctx->pc = 0x177ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x177de0: 0xffb00000
    ctx->pc = 0x177de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177de4: 0x80a02d
    ctx->pc = 0x177de4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177de8: 0xffb30030
    ctx->pc = 0x177de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x177dec: 0xa0802d
    ctx->pc = 0x177decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177df0: 0xffbf0050
    ctx->pc = 0x177df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x177df4: 0xffb20020
    ctx->pc = 0x177df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x177df8: 0xc051554
    ctx->pc = 0x177DF8u;
    SET_GPR_U32(ctx, 31, 0x177E00u);
    ctx->pc = 0x177DFCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E00u; }
        else if (ctx->pc != 0x177E00u) { ctx->pc = 0x177E00u; }
    }
    if (ctx->pc != 0x177E00u) { return; }
    ctx->pc = 0x177E00u;
    // 0x177e00: 0x40982d
    ctx->pc = 0x177e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e04: 0xc051554
    ctx->pc = 0x177E04u;
    SET_GPR_U32(ctx, 31, 0x177E0Cu);
    ctx->pc = 0x177E08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E0Cu; }
        else if (ctx->pc != 0x177E0Cu) { ctx->pc = 0x177E0Cu; }
    }
    if (ctx->pc != 0x177E0Cu) { return; }
    ctx->pc = 0x177E0Cu;
    // 0x177e0c: 0x12620003
    ctx->pc = 0x177E0Cu;
    {
        const bool branch_taken_0x177e0c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x177e0c) {
            ctx->pc = 0x177E1Cu;
            goto label_177e1c;
        }
    }
    ctx->pc = 0x177E14u;
label_177e14:
    // 0x177e14: 0x10000010
    ctx->pc = 0x177E14u;
    {
        const bool branch_taken_0x177e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x177E18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x177e14) {
            ctx->pc = 0x177E58u;
            goto label_177e58;
        }
    }
    ctx->pc = 0x177E1Cu;
label_177e1c:
    // 0x177e1c: 0x1a60000d
    ctx->pc = 0x177E1Cu;
    {
        const bool branch_taken_0x177e1c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x177E20u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177e1c) {
            ctx->pc = 0x177E54u;
            goto label_177e54;
        }
    }
    ctx->pc = 0x177E24u;
    // 0x177e24: 0x200882d
    ctx->pc = 0x177e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e28: 0x280802d
    ctx->pc = 0x177e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177e2c: 0x0
    ctx->pc = 0x177e2cu;
    // NOP
label_177e30:
    // 0x177e30: 0x82040000
    ctx->pc = 0x177e30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177e34: 0xc05df62
    ctx->pc = 0x177E34u;
    SET_GPR_U32(ctx, 31, 0x177E3Cu);
    ctx->pc = 0x177E38u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x177D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        dvci_charicmp_0x177d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177E3Cu; }
        else if (ctx->pc != 0x177E3Cu) { ctx->pc = 0x177E3Cu; }
    }
    if (ctx->pc != 0x177E3Cu) { return; }
    ctx->pc = 0x177E3Cu;
    // 0x177e3c: 0x1440fff5
    ctx->pc = 0x177E3Cu;
    {
        const bool branch_taken_0x177e3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177E40u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x177e3c) {
            ctx->pc = 0x177E14u;
            goto label_177e14;
        }
    }
    ctx->pc = 0x177E44u;
    // 0x177e44: 0x26310001
    ctx->pc = 0x177e44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x177e48: 0x253102a
    ctx->pc = 0x177e48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x177e4c: 0x1440fff8
    ctx->pc = 0x177E4Cu;
    {
        const bool branch_taken_0x177e4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x177E50u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x177e4c) {
            ctx->pc = 0x177E30u;
            goto label_177e30;
        }
    }
    ctx->pc = 0x177E54u;
label_177e54:
    // 0x177e54: 0x102d
    ctx->pc = 0x177e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177e58:
    // 0x177e58: 0xdfbf0050
    ctx->pc = 0x177e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177e5c: 0xdfb40040
    ctx->pc = 0x177e5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177e60: 0xdfb30030
    ctx->pc = 0x177e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177e64: 0xdfb20020
    ctx->pc = 0x177e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177e68: 0xdfb10010
    ctx->pc = 0x177e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177e6c: 0xdfb00000
    ctx->pc = 0x177e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177e70: 0x3e00008
    ctx->pc = 0x177E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x177E14u: goto label_177e14;
            case 0x177E1Cu: goto label_177e1c;
            case 0x177E30u: goto label_177e30;
            case 0x177E54u: goto label_177e54;
            case 0x177E58u: goto label_177e58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x177E78u;
}
