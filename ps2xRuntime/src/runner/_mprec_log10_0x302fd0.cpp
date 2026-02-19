#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _mprec_log10
// Address: 0x302fd0 - 0x30303c
void _mprec_log10_0x302fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x302fd0u;

    // 0x302fd0: 0x27bdffe0
    ctx->pc = 0x302fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302fd4: 0xffb00000
    ctx->pc = 0x302fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302fd8: 0x80802d
    ctx->pc = 0x302fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302fdc: 0x3404ffc0
    ctx->pc = 0x302fdcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65472));
    // 0x302fe0: 0x423bc
    ctx->pc = 0x302fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x302fe4: 0x2a020018
    ctx->pc = 0x302fe4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 24));
    // 0x302fe8: 0x10400007
    ctx->pc = 0x302FE8u;
    {
        const bool branch_taken_0x302fe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x302FECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x302fe8) {
            ctx->pc = 0x303008u;
            goto label_303008;
        }
    }
    ctx->pc = 0x302FF0u;
    // 0x302ff0: 0x3c02003c
    ctx->pc = 0x302ff0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x302ff4: 0x1018c0
    ctx->pc = 0x302ff4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
    // 0x302ff8: 0x2442ac20
    ctx->pc = 0x302ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945824));
    // 0x302ffc: 0x621821
    ctx->pc = 0x302ffcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303000: 0x1000000a
    ctx->pc = 0x303000u;
    {
        const bool branch_taken_0x303000 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x303004u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x303000) {
            ctx->pc = 0x30302Cu;
            goto label_30302c;
        }
    }
    ctx->pc = 0x303008u;
label_303008:
    // 0x303008: 0x1a000008
    ctx->pc = 0x303008u;
    {
        const bool branch_taken_0x303008 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x30300Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x303008) {
            ctx->pc = 0x30302Cu;
            goto label_30302c;
        }
    }
    ctx->pc = 0x303010u;
label_303010:
    // 0x303010: 0x34058048
    ctx->pc = 0x303010u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
    // 0x303014: 0x52bfc
    ctx->pc = 0x303014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x303018: 0xc0be370
    ctx->pc = 0x303018u;
    SET_GPR_U32(ctx, 31, 0x303020u);
    ctx->pc = 0x30301Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303020u; }
    }
    if (ctx->pc != 0x303020u) { return; }
    ctx->pc = 0x303020u;
    // 0x303020: 0x1e00fffb
    ctx->pc = 0x303020u;
    {
        const bool branch_taken_0x303020 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x303024u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x303020) {
            ctx->pc = 0x303010u;
            goto label_303010;
        }
    }
    ctx->pc = 0x303028u;
    // 0x303028: 0x80102d
    ctx->pc = 0x303028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30302c:
    // 0x30302c: 0xdfbf0010
    ctx->pc = 0x30302cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303030: 0xdfb00000
    ctx->pc = 0x303030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303034: 0x3e00008
    ctx->pc = 0x303034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303038u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303008u: goto label_303008;
            case 0x303010u: goto label_303010;
            case 0x30302Cu: goto label_30302c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30303Cu;
}
