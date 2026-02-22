#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StopSound
// Address: 0x10b1b8 - 0x10b214
void StopSound_0x10b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b1b8u;

    // 0x10b1b8: 0x27bdfff0
    ctx->pc = 0x10b1b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b1bc: 0x28820018
    ctx->pc = 0x10b1bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 24));
    // 0x10b1c0: 0x14400004
    ctx->pc = 0x10B1C0u;
    {
        const bool branch_taken_0x10b1c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10B1C4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x10b1c0) {
            ctx->pc = 0x10B1D4u;
            goto label_10b1d4;
        }
    }
    ctx->pc = 0x10B1C8u;
    // 0x10b1c8: 0x2484ffe8
    ctx->pc = 0x10b1c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967272));
    // 0x10b1cc: 0x10000002
    ctx->pc = 0x10B1CCu;
    {
        const bool branch_taken_0x10b1cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10B1D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x10b1cc) {
            ctx->pc = 0x10B1D8u;
            goto label_10b1d8;
        }
    }
    ctx->pc = 0x10B1D4u;
label_10b1d4:
    // 0x10b1d4: 0x302d
    ctx->pc = 0x10b1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b1d8:
    // 0x10b1d8: 0x24070001
    ctx->pc = 0x10b1d8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b1dc: 0x34c61600
    ctx->pc = 0x10b1dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)5632);
    // 0x10b1e0: 0x873804
    ctx->pc = 0x10b1e0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x10b1e4: 0x34058030
    ctx->pc = 0x10b1e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)32816);
    // 0x10b1e8: 0xc045c80
    ctx->pc = 0x10B1E8u;
    SET_GPR_U32(ctx, 31, 0x10B1F0u);
    ctx->pc = 0x10B1ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x117200u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B1F0u; }
    }
    if (ctx->pc != 0x10B1F0u) { return; }
    ctx->pc = 0x10B1F0u;
    // 0x10b1f0: 0x2403ffff
    ctx->pc = 0x10b1f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b1f4: 0x14430005
    ctx->pc = 0x10B1F4u;
    {
        const bool branch_taken_0x10b1f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x10B1F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x10b1f4) {
            ctx->pc = 0x10B20Cu;
            goto label_10b20c;
        }
    }
    ctx->pc = 0x10B1FCu;
    // 0x10b1fc: 0x3c040017
    ctx->pc = 0x10b1fcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10b200: 0x24843868
    ctx->pc = 0x10b200u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 14440));
    // 0x10b204: 0x804ace4
    ctx->pc = 0x10B204u;
    ctx->pc = 0x10B208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12B390u;
    printf_0x12b390(rdram, ctx, runtime); return;
    ctx->pc = 0x10B20Cu;
label_10b20c:
    // 0x10b20c: 0x3e00008
    ctx->pc = 0x10B20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B210u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B1D4u: goto label_10b1d4;
            case 0x10B1D8u: goto label_10b1d8;
            case 0x10B20Cu: goto label_10b20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B214u;
}
