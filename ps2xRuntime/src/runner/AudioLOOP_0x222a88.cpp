#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLOOP
// Address: 0x222a88 - 0x222b10
void AudioLOOP_0x222a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222a88u;

    // 0x222a88: 0x27bdffb0
    ctx->pc = 0x222a88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x222a8c: 0xffbf0040
    ctx->pc = 0x222a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x222a90: 0xffb30030
    ctx->pc = 0x222a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x222a94: 0xffb20020
    ctx->pc = 0x222a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x222a98: 0xffb10010
    ctx->pc = 0x222a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x222a9c: 0xffb00000
    ctx->pc = 0x222a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222aa0: 0x80902d
    ctx->pc = 0x222aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222aa4: 0xa0802d
    ctx->pc = 0x222aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222aa8: 0xc0882d
    ctx->pc = 0x222aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222aac: 0x3c020031
    ctx->pc = 0x222aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x222ab0: 0x8c420018
    ctx->pc = 0x222ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x222ab4: 0x30428000
    ctx->pc = 0x222ab4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x222ab8: 0x10400005
    ctx->pc = 0x222AB8u;
    {
        const bool branch_taken_0x222ab8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222ABCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222ab8) {
            ctx->pc = 0x222AD0u;
            goto label_222ad0;
        }
    }
    ctx->pc = 0x222AC0u;
    // 0x222ac0: 0x3c020032
    ctx->pc = 0x222ac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222ac4: 0x8c42fd60
    ctx->pc = 0x222ac4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966624)));
    // 0x222ac8: 0x1040000a
    ctx->pc = 0x222AC8u;
    {
        const bool branch_taken_0x222ac8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222ACCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222ac8) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222AD0u;
label_222ad0:
    // 0x222ad0: 0xc088648
    ctx->pc = 0x222AD0u;
    SET_GPR_U32(ctx, 31, 0x222AD8u);
    ctx->pc = 0x222AD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222AD8u; }
    }
    if (ctx->pc != 0x222AD8u) { return; }
    ctx->pc = 0x222AD8u;
    // 0x222ad8: 0x2404ffff
    ctx->pc = 0x222ad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222adc: 0x240282d
    ctx->pc = 0x222adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ae0: 0x220302d
    ctx->pc = 0x222ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ae4: 0x200382d
    ctx->pc = 0x222ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ae8: 0x40402d
    ctx->pc = 0x222ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222aec: 0xc088958
    ctx->pc = 0x222AECu;
    SET_GPR_U32(ctx, 31, 0x222AF4u);
    ctx->pc = 0x222AF0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222560u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrack4_0x222560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222AF4u; }
    }
    if (ctx->pc != 0x222AF4u) { return; }
    ctx->pc = 0x222AF4u;
label_222af4:
    // 0x222af4: 0xdfbf0040
    ctx->pc = 0x222af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222af8: 0xdfb30030
    ctx->pc = 0x222af8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222afc: 0xdfb20020
    ctx->pc = 0x222afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222b00: 0xdfb10010
    ctx->pc = 0x222b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222b04: 0xdfb00000
    ctx->pc = 0x222b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222b08: 0x3e00008
    ctx->pc = 0x222B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222AD0u: goto label_222ad0;
            case 0x222AF4u: goto label_222af4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222B10u;
}
