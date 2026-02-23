#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_ResetConti
// Address: 0x191fd0 - 0x19205c
void sfbuf_ResetConti_0x191fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_ResetConti");


    ctx->pc = 0x191fd0u;

    // 0x191fd0: 0x27bdffc0
    ctx->pc = 0x191fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191fd4: 0x24050001
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x191fd8: 0xffb10020
    ctx->pc = 0x191fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x191fdc: 0x3a0302d
    ctx->pc = 0x191fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fe0: 0xffb00010
    ctx->pc = 0x191fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x191fe4: 0xffbf0030
    ctx->pc = 0x191fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x191fe8: 0x80802d
    ctx->pc = 0x191fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fec: 0x26110018
    ctx->pc = 0x191fecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 24));
    // 0x191ff0: 0xc064818
    ctx->pc = 0x191FF0u;
    SET_GPR_U32(ctx, 31, 0x191FF8u);
    ctx->pc = 0x191FF4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x192060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_PeekChunk_0x192060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191FF8u; }
        else if (ctx->pc != 0x191FF8u) { ctx->pc = 0x191FF8u; }
    }
    if (ctx->pc != 0x191FF8u) { return; }
    ctx->pc = 0x191FF8u;
    // 0x191ff8: 0x8e050018
    ctx->pc = 0x191ff8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x191ffc: 0x8fa30000
    ctx->pc = 0x191ffcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192000: 0x65102b
    ctx->pc = 0x192000u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x192004: 0x10400007
    ctx->pc = 0x192004u;
    {
        const bool branch_taken_0x192004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x192008u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x192004) {
            ctx->pc = 0x192024u;
            goto label_192024;
        }
    }
    ctx->pc = 0x19200Cu;
    // 0x19200c: 0x641021
    ctx->pc = 0x19200cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x192010: 0x45102b
    ctx->pc = 0x192010u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x192014: 0x50400006
    ctx->pc = 0x192014u;
    {
        const bool branch_taken_0x192014 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x192014) {
            ctx->pc = 0x192018u;
            SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
            ctx->pc = 0x192030u;
            goto label_192030;
        }
    }
    ctx->pc = 0x19201Cu;
    // 0x19201c: 0x10000002
    ctx->pc = 0x19201Cu;
    {
        const bool branch_taken_0x19201c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192020u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x19201c) {
            ctx->pc = 0x192028u;
            goto label_192028;
        }
    }
    ctx->pc = 0x192024u;
label_192024:
    // 0x192024: 0xae000018
    ctx->pc = 0x192024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_192028:
    // 0x192028: 0xae200004
    ctx->pc = 0x192028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x19202c: 0x642021
    ctx->pc = 0x19202cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_192030:
    // 0x192030: 0x8e02000c
    ctx->pc = 0x192030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x192034: 0x8e030008
    ctx->pc = 0x192034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x192038: 0x621821
    ctx->pc = 0x192038u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19203c: 0x10830003
    ctx->pc = 0x19203Cu;
    {
        const bool branch_taken_0x19203c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x192040u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19203c) {
            ctx->pc = 0x19204Cu;
            goto label_19204c;
        }
    }
    ctx->pc = 0x192044u;
    // 0x192044: 0xae20000c
    ctx->pc = 0x192044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x192048: 0xae200008
    ctx->pc = 0x192048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_19204c:
    // 0x19204c: 0xdfb10020
    ctx->pc = 0x19204cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192050: 0xdfb00010
    ctx->pc = 0x192050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192054: 0x3e00008
    ctx->pc = 0x192054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192058u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192024u: goto label_192024;
            case 0x192028u: goto label_192028;
            case 0x192030u: goto label_192030;
            case 0x19204Cu: goto label_19204c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19205Cu;
}
