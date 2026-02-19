#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioCrystalSpeech
// Address: 0x2611d0 - 0x261230
void AudioCrystalSpeech_0x2611d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2611d0u;

    // 0x2611d0: 0x27bdffe0
    ctx->pc = 0x2611d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2611d4: 0xffbf0010
    ctx->pc = 0x2611d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2611d8: 0xffb00000
    ctx->pc = 0x2611d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2611dc: 0x3c020034
    ctx->pc = 0x2611dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2611e0: 0x2442e3d8
    ctx->pc = 0x2611e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960088));
    // 0x2611e4: 0x42080
    ctx->pc = 0x2611e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2611e8: 0x822021
    ctx->pc = 0x2611e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2611ec: 0x8c900000
    ctx->pc = 0x2611ecu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2611f0: 0x600000a
    ctx->pc = 0x2611F0u;
    {
        const bool branch_taken_0x2611f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2611F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2611f0) {
            ctx->pc = 0x26121Cu;
            goto label_26121c;
        }
    }
    ctx->pc = 0x2611F8u;
    // 0x2611f8: 0x200282d
    ctx->pc = 0x2611f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2611fc: 0x240600e0
    ctx->pc = 0x2611fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x261200: 0x2407007f
    ctx->pc = 0x261200u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 127));
    // 0x261204: 0x3c01bf80
    ctx->pc = 0x261204u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x261208: 0x44816000
    ctx->pc = 0x261208u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26120c: 0x3c014120
    ctx->pc = 0x26120cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x261210: 0x44816800
    ctx->pc = 0x261210u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x261214: 0xc088bd2
    ctx->pc = 0x261214u;
    SET_GPR_U32(ctx, 31, 0x26121Cu);
    ctx->pc = 0x261218u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x222F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAnyQueAdd4_0x222f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26121Cu; }
    }
    if (ctx->pc != 0x26121Cu) { return; }
    ctx->pc = 0x26121Cu;
label_26121c:
    // 0x26121c: 0x200102d
    ctx->pc = 0x26121cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261220: 0xdfbf0010
    ctx->pc = 0x261220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261224: 0xdfb00000
    ctx->pc = 0x261224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261228: 0x3e00008
    ctx->pc = 0x261228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26122Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26121Cu: goto label_26121c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261230u;
}
