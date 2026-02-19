#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeMatchAnyHeader
// Address: 0x24faa8 - 0x24fbb0
void AtreeMatchAnyHeader_0x24faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24faa8u;

    // 0x24faa8: 0x27bdffc0
    ctx->pc = 0x24faa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24faac: 0xffbf0030
    ctx->pc = 0x24faacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24fab0: 0xffb20020
    ctx->pc = 0x24fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24fab4: 0xffb10010
    ctx->pc = 0x24fab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24fab8: 0xffb00000
    ctx->pc = 0x24fab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fabc: 0x80882d
    ctx->pc = 0x24fabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fac0: 0xa0802d
    ctx->pc = 0x24fac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fac4: 0x12200004
    ctx->pc = 0x24FAC4u;
    {
        const bool branch_taken_0x24fac4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FAC8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fac4) {
            ctx->pc = 0x24FAD8u;
            goto label_24fad8;
        }
    }
    ctx->pc = 0x24FACCu;
    // 0x24facc: 0x82220000
    ctx->pc = 0x24faccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24fad0: 0x14400003
    ctx->pc = 0x24FAD0u;
    {
        const bool branch_taken_0x24fad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FAD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x24fad0) {
            ctx->pc = 0x24FAE0u;
            goto label_24fae0;
        }
    }
    ctx->pc = 0x24FAD8u;
label_24fad8:
    // 0x24fad8: 0x1000002f
    ctx->pc = 0x24FAD8u;
    {
        const bool branch_taken_0x24fad8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FADCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fad8) {
            ctx->pc = 0x24FB98u;
            goto label_24fb98;
        }
    }
    ctx->pc = 0x24FAE0u;
label_24fae0:
    // 0x24fae0: 0x8c44cda0
    ctx->pc = 0x24fae0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954400)));
    // 0x24fae4: 0x10800004
    ctx->pc = 0x24FAE4u;
    {
        const bool branch_taken_0x24fae4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FAE8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fae4) {
            ctx->pc = 0x24FAF8u;
            goto label_24faf8;
        }
    }
    ctx->pc = 0x24FAECu;
    // 0x24faec: 0xc0847fc
    ctx->pc = 0x24FAECu;
    SET_GPR_U32(ctx, 31, 0x24FAF4u);
    ctx->pc = 0x24FAF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FAF4u; }
    }
    if (ctx->pc != 0x24FAF4u) { return; }
    ctx->pc = 0x24FAF4u;
    // 0x24faf4: 0x40182d
    ctx->pc = 0x24faf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24faf8:
    // 0x24faf8: 0x14600027
    ctx->pc = 0x24FAF8u;
    {
        const bool branch_taken_0x24faf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FAFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24faf8) {
            ctx->pc = 0x24FB98u;
            goto label_24fb98;
        }
    }
    ctx->pc = 0x24FB00u;
    // 0x24fb00: 0x3c020034
    ctx->pc = 0x24fb00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fb04: 0x8c44cdac
    ctx->pc = 0x24fb04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x24fb08: 0x10800004
    ctx->pc = 0x24FB08u;
    {
        const bool branch_taken_0x24fb08 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FB0Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fb08) {
            ctx->pc = 0x24FB1Cu;
            goto label_24fb1c;
        }
    }
    ctx->pc = 0x24FB10u;
    // 0x24fb10: 0xc0847fc
    ctx->pc = 0x24FB10u;
    SET_GPR_U32(ctx, 31, 0x24FB18u);
    ctx->pc = 0x24FB14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB18u; }
    }
    if (ctx->pc != 0x24FB18u) { return; }
    ctx->pc = 0x24FB18u;
    // 0x24fb18: 0x40182d
    ctx->pc = 0x24fb18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24fb1c:
    // 0x24fb1c: 0x1460001e
    ctx->pc = 0x24FB1Cu;
    {
        const bool branch_taken_0x24fb1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FB20u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fb1c) {
            ctx->pc = 0x24FB98u;
            goto label_24fb98;
        }
    }
    ctx->pc = 0x24FB24u;
    // 0x24fb24: 0x3c020034
    ctx->pc = 0x24fb24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fb28: 0x8c44cda4
    ctx->pc = 0x24fb28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954404)));
    // 0x24fb2c: 0x10800004
    ctx->pc = 0x24FB2Cu;
    {
        const bool branch_taken_0x24fb2c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FB30u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fb2c) {
            ctx->pc = 0x24FB40u;
            goto label_24fb40;
        }
    }
    ctx->pc = 0x24FB34u;
    // 0x24fb34: 0xc0847fc
    ctx->pc = 0x24FB34u;
    SET_GPR_U32(ctx, 31, 0x24FB3Cu);
    ctx->pc = 0x24FB38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB3Cu; }
    }
    if (ctx->pc != 0x24FB3Cu) { return; }
    ctx->pc = 0x24FB3Cu;
    // 0x24fb3c: 0x40182d
    ctx->pc = 0x24fb3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24fb40:
    // 0x24fb40: 0x14600015
    ctx->pc = 0x24FB40u;
    {
        const bool branch_taken_0x24fb40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FB44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fb40) {
            ctx->pc = 0x24FB98u;
            goto label_24fb98;
        }
    }
    ctx->pc = 0x24FB48u;
    // 0x24fb48: 0x12000013
    ctx->pc = 0x24FB48u;
    {
        const bool branch_taken_0x24fb48 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FB4Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fb48) {
            ctx->pc = 0x24FB98u;
            goto label_24fb98;
        }
    }
    ctx->pc = 0x24FB50u;
    // 0x24fb50: 0x3c020033
    ctx->pc = 0x24fb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24fb54: 0x10000003
    ctx->pc = 0x24FB54u;
    {
        const bool branch_taken_0x24fb54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FB58u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15368));
        if (branch_taken_0x24fb54) {
            ctx->pc = 0x24FB64u;
            goto label_24fb64;
        }
    }
    ctx->pc = 0x24FB5Cu;
    // 0x24fb5c: 0x0
    ctx->pc = 0x24fb5cu;
    // NOP
label_24fb60:
    // 0x24fb60: 0x26100001
    ctx->pc = 0x24fb60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_24fb64:
    // 0x24fb64: 0x2a02002d
    ctx->pc = 0x24fb64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 45));
    // 0x24fb68: 0x1040000a
    ctx->pc = 0x24FB68u;
    {
        const bool branch_taken_0x24fb68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FB6Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x24fb68) {
            ctx->pc = 0x24FB94u;
            goto label_24fb94;
        }
    }
    ctx->pc = 0x24FB70u;
    // 0x24fb70: 0x521021
    ctx->pc = 0x24fb70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24fb74: 0x8c440000
    ctx->pc = 0x24fb74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fb78: 0x1080fff9
    ctx->pc = 0x24FB78u;
    {
        const bool branch_taken_0x24fb78 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FB7Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fb78) {
            ctx->pc = 0x24FB60u;
            goto label_24fb60;
        }
    }
    ctx->pc = 0x24FB80u;
    // 0x24fb80: 0xc0847fc
    ctx->pc = 0x24FB80u;
    SET_GPR_U32(ctx, 31, 0x24FB88u);
    ctx->pc = 0x24FB84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FB88u; }
    }
    if (ctx->pc != 0x24FB88u) { return; }
    ctx->pc = 0x24FB88u;
    // 0x24fb88: 0x40182d
    ctx->pc = 0x24fb88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb8c: 0x1060fff5
    ctx->pc = 0x24FB8Cu;
    {
        const bool branch_taken_0x24fb8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FB90u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x24fb8c) {
            ctx->pc = 0x24FB64u;
            goto label_24fb64;
        }
    }
    ctx->pc = 0x24FB94u;
label_24fb94:
    // 0x24fb94: 0x60102d
    ctx->pc = 0x24fb94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24fb98:
    // 0x24fb98: 0xdfbf0030
    ctx->pc = 0x24fb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fb9c: 0xdfb20020
    ctx->pc = 0x24fb9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fba0: 0xdfb10010
    ctx->pc = 0x24fba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fba4: 0xdfb00000
    ctx->pc = 0x24fba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fba8: 0x3e00008
    ctx->pc = 0x24FBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FBACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24FAD8u: goto label_24fad8;
            case 0x24FAE0u: goto label_24fae0;
            case 0x24FAF8u: goto label_24faf8;
            case 0x24FB1Cu: goto label_24fb1c;
            case 0x24FB40u: goto label_24fb40;
            case 0x24FB60u: goto label_24fb60;
            case 0x24FB64u: goto label_24fb64;
            case 0x24FB94u: goto label_24fb94;
            case 0x24FB98u: goto label_24fb98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24FBB0u;
}
