#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGetVu1DataF
// Address: 0x2b3590 - 0x2b360c
void pbGetVu1DataF_0x2b3590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3590u;

    // 0x2b3590: 0x27bdffe0
    ctx->pc = 0x2b3590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3594: 0xffbf0010
    ctx->pc = 0x2b3594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3598: 0xffb00000
    ctx->pc = 0x2b3598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b359c: 0xc0802d
    ctx->pc = 0x2b359cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35a0: 0xc0accda
    ctx->pc = 0x2B35A0u;
    SET_GPR_U32(ctx, 31, 0x2B35A8u);
    ctx->pc = 0x2B35A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3368u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1DataAddr_0x2b3368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B35A8u; }
    }
    if (ctx->pc != 0x2B35A8u) { return; }
    ctx->pc = 0x2B35A8u;
    // 0x2b35a8: 0x40202d
    ctx->pc = 0x2b35a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b35ac: 0x54800005
    ctx->pc = 0x2B35ACu;
    {
        const bool branch_taken_0x2b35ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b35ac) {
            ctx->pc = 0x2B35B0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B35C4u;
            goto label_2b35c4;
        }
    }
    ctx->pc = 0x2B35B4u;
    // 0x2b35b4: 0x3c01c000
    ctx->pc = 0x2b35b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49152 << 16));
    // 0x2b35b8: 0x44810000
    ctx->pc = 0x2b35b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2b35bc: 0x10000010
    ctx->pc = 0x2B35BCu;
    {
        const bool branch_taken_0x2b35bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B35C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2b35bc) {
            ctx->pc = 0x2B3600u;
            goto label_2b3600;
        }
    }
    ctx->pc = 0x2B35C4u;
label_2b35c4:
    // 0x2b35c4: 0x3c02ffff
    ctx->pc = 0x2b35c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b35c8: 0x3442ffff
    ctx->pc = 0x2b35c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2b35cc: 0x54620005
    ctx->pc = 0x2B35CCu;
    {
        const bool branch_taken_0x2b35cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b35cc) {
            ctx->pc = 0x2B35D0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B35E4u;
            goto label_2b35e4;
        }
    }
    ctx->pc = 0x2B35D4u;
    // 0x2b35d4: 0x3c01bf80
    ctx->pc = 0x2b35d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2b35d8: 0x44810000
    ctx->pc = 0x2b35d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2b35dc: 0x10000008
    ctx->pc = 0x2B35DCu;
    {
        const bool branch_taken_0x2b35dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B35E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2b35dc) {
            ctx->pc = 0x2B3600u;
            goto label_2b3600;
        }
    }
    ctx->pc = 0x2B35E4u;
label_2b35e4:
    // 0x2b35e4: 0x101880
    ctx->pc = 0x2b35e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b35e8: 0x621821
    ctx->pc = 0x2b35e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b35ec: 0x3c021100
    ctx->pc = 0x2b35ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
    // 0x2b35f0: 0x3442c000
    ctx->pc = 0x2b35f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2b35f4: 0x621821
    ctx->pc = 0x2b35f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b35f8: 0xc4600000
    ctx->pc = 0x2b35f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b35fc: 0xdfbf0010
    ctx->pc = 0x2b35fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3600:
    // 0x2b3600: 0xdfb00000
    ctx->pc = 0x2b3600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3604: 0x3e00008
    ctx->pc = 0x2B3604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3608u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B35C4u: goto label_2b35c4;
            case 0x2B35E4u: goto label_2b35e4;
            case 0x2B3600u: goto label_2b3600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B360Cu;
}
