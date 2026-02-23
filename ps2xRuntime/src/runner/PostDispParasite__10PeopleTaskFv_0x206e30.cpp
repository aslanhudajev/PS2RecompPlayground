#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PostDispParasite__10PeopleTaskFv
// Address: 0x206e30 - 0x206e90
void PostDispParasite__10PeopleTaskFv_0x206e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PostDispParasite__10PeopleTaskFv");


    ctx->pc = 0x206e30u;

    // 0x206e30: 0x27bdfff0
    ctx->pc = 0x206e30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206e34: 0x7fbf0000
    ctx->pc = 0x206e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x206e38: 0x83838ba8
    ctx->pc = 0x206e38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x206e3c: 0x24020006
    ctx->pc = 0x206e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x206e40: 0x14620008
    ctx->pc = 0x206E40u;
    {
        const bool branch_taken_0x206e40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x206E44u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x206e40) {
            ctx->pc = 0x206E64u;
            goto label_206e64;
        }
    }
    ctx->pc = 0x206E48u;
    // 0x206e48: 0x8023e424
    ctx->pc = 0x206e48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960164)));
    // 0x206e4c: 0x24020001
    ctx->pc = 0x206e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x206e50: 0x14620004
    ctx->pc = 0x206E50u;
    {
        const bool branch_taken_0x206e50 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x206e50) {
            ctx->pc = 0x206E64u;
            goto label_206e64;
        }
    }
    ctx->pc = 0x206E58u;
    // 0x206e58: 0x8c82000c
    ctx->pc = 0x206e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x206e5c: 0x34428000
    ctx->pc = 0x206e5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x206e60: 0xac82000c
    ctx->pc = 0x206e60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_206e64:
    // 0x206e64: 0x8c820030
    ctx->pc = 0x206e64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x206e68: 0xc4800bbc
    ctx->pc = 0x206e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e6c: 0xe4400030
    ctx->pc = 0x206e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x206e70: 0xc4800bc0
    ctx->pc = 0x206e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e74: 0xe4400034
    ctx->pc = 0x206e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x206e78: 0xc4800bc4
    ctx->pc = 0x206e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206e7c: 0xc24a964
    ctx->pc = 0x206E7Cu;
    SET_GPR_U32(ctx, 31, 0x206E84u);
    ctx->pc = 0x206E80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x92A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Enemy_Set_ColliBuff__FP9EnemyTask_0x92a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E84u; }
        else if (ctx->pc != 0x206E84u) { ctx->pc = 0x206E84u; }
    }
    if (ctx->pc != 0x206E84u) { return; }
    ctx->pc = 0x206E84u;
    // 0x206e84: 0x7bbf0000
    ctx->pc = 0x206e84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206e88: 0x3e00008
    ctx->pc = 0x206E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E8Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206E64u: goto label_206e64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206E90u;
}
