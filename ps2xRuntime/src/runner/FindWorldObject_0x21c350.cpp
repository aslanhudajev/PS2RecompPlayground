#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindWorldObject
// Address: 0x21c350 - 0x21c374
void FindWorldObject_0x21c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21c350u;

    // 0x21c350: 0x27bdfff0
    ctx->pc = 0x21c350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c354: 0xffbf0000
    ctx->pc = 0x21c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21c358: 0x80282d
    ctx->pc = 0x21c358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c35c: 0x3c020032
    ctx->pc = 0x21c35cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21c360: 0xc0870aa
    ctx->pc = 0x21C360u;
    SET_GPR_U32(ctx, 31, 0x21C368u);
    ctx->pc = 0x21C364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965916)));
    ctx->pc = 0x21C2A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWORLDOBJ_0x21c2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C368u; }
    }
    if (ctx->pc != 0x21C368u) { return; }
    ctx->pc = 0x21C368u;
    // 0x21c368: 0xdfbf0000
    ctx->pc = 0x21c368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c36c: 0x3e00008
    ctx->pc = 0x21C36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C370u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21C374u;
}
