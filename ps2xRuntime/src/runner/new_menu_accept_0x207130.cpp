#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_menu_accept
// Address: 0x207130 - 0x207174
void new_menu_accept_0x207130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207130u;

    // 0x207130: 0x27bdffe0
    ctx->pc = 0x207130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207134: 0xffbf0010
    ctx->pc = 0x207134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207138: 0xffb00000
    ctx->pc = 0x207138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20713c: 0x80182d
    ctx->pc = 0x20713cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207140: 0x3c100031
    ctx->pc = 0x207140u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
    // 0x207144: 0x24020001
    ctx->pc = 0x207144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x207148: 0xae021b1c
    ctx->pc = 0x207148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6940), GPR_U32(ctx, 2));
    // 0x20714c: 0x3c020200
    ctx->pc = 0x20714cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)512 << 16));
    // 0x207150: 0x3c040204
    ctx->pc = 0x207150u;
    SET_GPR_U32(ctx, 4, ((uint32_t)516 << 16));
    // 0x207154: 0x45200a
    ctx->pc = 0x207154u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x207158: 0xc081b98
    ctx->pc = 0x207158u;
    SET_GPR_U32(ctx, 31, 0x207160u);
    ctx->pc = 0x20715Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ctrl_0x206e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207160u; }
    }
    if (ctx->pc != 0x207160u) { return; }
    ctx->pc = 0x207160u;
    // 0x207160: 0xae001b1c
    ctx->pc = 0x207160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6940), GPR_U32(ctx, 0));
    // 0x207164: 0xdfbf0010
    ctx->pc = 0x207164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207168: 0xdfb00000
    ctx->pc = 0x207168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20716c: 0x3e00008
    ctx->pc = 0x20716Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207170u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207174u;
}
