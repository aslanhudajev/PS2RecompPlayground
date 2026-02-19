#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddPsysObject
// Address: 0x2c7e18 - 0x2c7eb0
void AddPsysObject_0x2c7e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7e18u;

    // 0x2c7e18: 0x27bdffd0
    ctx->pc = 0x2c7e18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c7e1c: 0xffbf0020
    ctx->pc = 0x2c7e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c7e20: 0xffb10010
    ctx->pc = 0x2c7e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7e24: 0xffb00000
    ctx->pc = 0x2c7e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7e28: 0xa0882d
    ctx->pc = 0x2c7e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e2c: 0x3c02003a
    ctx->pc = 0x2c7e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c7e30: 0x8c45a9e0
    ctx->pc = 0x2c7e30u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294945248)));
    // 0x2c7e34: 0x28a200ff
    ctx->pc = 0x2c7e34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 255));
    // 0x2c7e38: 0x14400006
    ctx->pc = 0x2C7E38u;
    {
        const bool branch_taken_0x2c7e38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C7E3Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e38) {
            ctx->pc = 0x2C7E54u;
            goto label_2c7e54;
        }
    }
    ctx->pc = 0x2C7E40u;
    // 0x2c7e40: 0x3c04003b
    ctx->pc = 0x2c7e40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c7e44: 0xc0b492e
    ctx->pc = 0x2C7E44u;
    SET_GPR_U32(ctx, 31, 0x2C7E4Cu);
    ctx->pc = 0x2C7E48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29416));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7E4Cu; }
    }
    if (ctx->pc != 0x2C7E4Cu) { return; }
    ctx->pc = 0x2C7E4Cu;
    // 0x2c7e4c: 0x10000013
    ctx->pc = 0x2C7E4Cu;
    {
        const bool branch_taken_0x2c7e4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7E50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e4c) {
            ctx->pc = 0x2C7E9Cu;
            goto label_2c7e9c;
        }
    }
    ctx->pc = 0x2C7E54u;
label_2c7e54:
    // 0x2c7e54: 0x3c04003a
    ctx->pc = 0x2c7e54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2c7e58: 0x8c83a9e0
    ctx->pc = 0x2c7e58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294945248)));
    // 0x2c7e5c: 0x24100050
    ctx->pc = 0x2c7e5cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c7e60: 0x708018
    ctx->pc = 0x2c7e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c7e64: 0x3c020039
    ctx->pc = 0x2c7e64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x2c7e68: 0x244259e0
    ctx->pc = 0x2c7e68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23008));
    // 0x2c7e6c: 0x2028021
    ctx->pc = 0x2c7e6cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c7e70: 0x24630001
    ctx->pc = 0x2c7e70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c7e74: 0xac83a9e0
    ctx->pc = 0x2c7e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294945248), GPR_U32(ctx, 3));
    // 0x2c7e78: 0xc0202d
    ctx->pc = 0x2c7e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e7c: 0xc0b5494
    ctx->pc = 0x2C7E7Cu;
    SET_GPR_U32(ctx, 31, 0x2C7E84u);
    ctx->pc = 0x2C7E80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7E84u; }
    }
    if (ctx->pc != 0x2C7E84u) { return; }
    ctx->pc = 0x2C7E84u;
    // 0x2c7e84: 0xae000040
    ctx->pc = 0x2c7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2c7e88: 0xae110044
    ctx->pc = 0x2c7e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
    // 0x2c7e8c: 0x3c020038
    ctx->pc = 0x2c7e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c7e90: 0x8c42b1ac
    ctx->pc = 0x2c7e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947244)));
    // 0x2c7e94: 0xae020048
    ctx->pc = 0x2c7e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2c7e98: 0x24020001
    ctx->pc = 0x2c7e98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2c7e9c:
    // 0x2c7e9c: 0xdfbf0020
    ctx->pc = 0x2c7e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7ea0: 0xdfb10010
    ctx->pc = 0x2c7ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7ea4: 0xdfb00000
    ctx->pc = 0x2c7ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7ea8: 0x3e00008
    ctx->pc = 0x2C7EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7EACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7E54u: goto label_2c7e54;
            case 0x2C7E9Cu: goto label_2c7e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7EB0u;
}
