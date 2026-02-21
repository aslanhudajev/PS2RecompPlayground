#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGargSpeech
// Address: 0x261230 - 0x261290
void AudioGargSpeech_0x261230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261230u;

    // 0x261230: 0x27bdffe0
    ctx->pc = 0x261230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x261234: 0xffbf0010
    ctx->pc = 0x261234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x261238: 0xffb00000
    ctx->pc = 0x261238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26123c: 0x3c020034
    ctx->pc = 0x26123cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261240: 0x2442e400
    ctx->pc = 0x261240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960128));
    // 0x261244: 0x42080
    ctx->pc = 0x261244u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x261248: 0x822021
    ctx->pc = 0x261248u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26124c: 0x8c900000
    ctx->pc = 0x26124cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x261250: 0x600000a
    ctx->pc = 0x261250u;
    {
        const bool branch_taken_0x261250 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x261254u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x261250) {
            ctx->pc = 0x26127Cu;
            goto label_26127c;
        }
    }
    ctx->pc = 0x261258u;
    // 0x261258: 0x200282d
    ctx->pc = 0x261258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26125c: 0x240600e0
    ctx->pc = 0x26125cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x261260: 0x2407007f
    ctx->pc = 0x261260u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 127));
    // 0x261264: 0x3c01bf80
    ctx->pc = 0x261264u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x261268: 0x44816000
    ctx->pc = 0x261268u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26126c: 0x3c014120
    ctx->pc = 0x26126cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x261270: 0x44816800
    ctx->pc = 0x261270u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x261274: 0xc088bd2
    ctx->pc = 0x261274u;
    SET_GPR_U32(ctx, 31, 0x26127Cu);
    ctx->pc = 0x261278u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x222F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAnyQueAdd4_0x222f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26127Cu; }
    }
    if (ctx->pc != 0x26127Cu) { return; }
    ctx->pc = 0x26127Cu;
label_26127c:
    // 0x26127c: 0x200102d
    ctx->pc = 0x26127cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261280: 0xdfbf0010
    ctx->pc = 0x261280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261284: 0xdfb00000
    ctx->pc = 0x261284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261288: 0x3e00008
    ctx->pc = 0x261288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26128Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26127Cu: goto label_26127c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261290u;
}
