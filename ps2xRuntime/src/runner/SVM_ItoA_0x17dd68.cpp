#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ItoA
// Address: 0x17dd68 - 0x17de7c
void SVM_ItoA_0x17dd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ItoA");


    ctx->pc = 0x17dd68u;

    // 0x17dd68: 0x27bdff90
    ctx->pc = 0x17dd68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17dd6c: 0xffb40040
    ctx->pc = 0x17dd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x17dd70: 0xffb20020
    ctx->pc = 0x17dd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17dd74: 0xa0a02d
    ctx->pc = 0x17dd74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd78: 0xffb00000
    ctx->pc = 0x17dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17dd7c: 0x902d
    ctx->pc = 0x17dd7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd80: 0xffbf0060
    ctx->pc = 0x17dd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17dd84: 0x80802d
    ctx->pc = 0x17dd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd88: 0xffb50050
    ctx->pc = 0x17dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x17dd8c: 0xffb30030
    ctx->pc = 0x17dd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17dd90: 0xffb10010
    ctx->pc = 0x17dd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17dd94: 0x3c15002e
    ctx->pc = 0x17dd94u;
    SET_GPR_U32(ctx, 21, ((uint32_t)46 << 16));
    // 0x17dd98: 0x64d3ffff
    ctx->pc = 0x17dd98u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 6) + (int64_t)4294967295);
    // 0x17dd9c: 0x0
    ctx->pc = 0x17dd9cu;
    // NOP
label_17dda0:
    // 0x17dda0: 0x2a420020
    ctx->pc = 0x17dda0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 32));
    // 0x17dda4: 0x1040000f
    ctx->pc = 0x17DDA4u;
    {
        const bool branch_taken_0x17dda4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DDA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17dda4) {
            ctx->pc = 0x17DDE4u;
            goto label_17dde4;
        }
    }
    ctx->pc = 0x17DDACu;
    // 0x17ddac: 0x12103c
    ctx->pc = 0x17ddacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x17ddb0: 0x2103f
    ctx->pc = 0x17ddb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17ddb4: 0x2828821
    ctx->pc = 0x17ddb4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17ddb8: 0xc05270e
    ctx->pc = 0x17DDB8u;
    SET_GPR_U32(ctx, 31, 0x17DDC0u);
    ctx->pc = 0x17DDBCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x149C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___moddi3_0x149c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDC0u; }
        else if (ctx->pc != 0x17DDC0u) { ctx->pc = 0x17DDC0u; }
    }
    if (ctx->pc != 0x17DDC0u) { return; }
    ctx->pc = 0x17DDC0u;
    // 0x17ddc0: 0x304200ff
    ctx->pc = 0x17ddc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x17ddc4: 0x200202d
    ctx->pc = 0x17ddc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc8: 0xa2220000
    ctx->pc = 0x17ddc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17ddcc: 0xc052114
    ctx->pc = 0x17DDCCu;
    SET_GPR_U32(ctx, 31, 0x17DDD4u);
    ctx->pc = 0x17DDD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x148450u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___divdi3_0x148450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDD4u; }
        else if (ctx->pc != 0x17DDD4u) { ctx->pc = 0x17DDD4u; }
    }
    if (ctx->pc != 0x17DDD4u) { return; }
    ctx->pc = 0x17DDD4u;
    // 0x17ddd4: 0x40802d
    ctx->pc = 0x17ddd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddd8: 0x1600fff1
    ctx->pc = 0x17DDD8u;
    {
        const bool branch_taken_0x17ddd8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DDDCu;
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)1);
        if (branch_taken_0x17ddd8) {
            ctx->pc = 0x17DDA0u;
            goto label_17dda0;
        }
    }
    ctx->pc = 0x17DDE0u;
    // 0x17dde0: 0xa2200000
    ctx->pc = 0x17dde0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_17dde4:
    // 0x17dde4: 0x26b01ac0
    ctx->pc = 0x17dde4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 6848));
    // 0x17dde8: 0x902d
    ctx->pc = 0x17dde8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddec: 0xc051554
    ctx->pc = 0x17DDECu;
    SET_GPR_U32(ctx, 31, 0x17DDF4u);
    ctx->pc = 0x17DDF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DDF4u; }
        else if (ctx->pc != 0x17DDF4u) { ctx->pc = 0x17DDF4u; }
    }
    if (ctx->pc != 0x17DDF4u) { return; }
    ctx->pc = 0x17DDF4u;
    // 0x17ddf4: 0x2103c
    ctx->pc = 0x17ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17ddf8: 0x2283e
    ctx->pc = 0x17ddf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17ddfc: 0xb3102a
    ctx->pc = 0x17ddfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 19)));
    // 0x17de00: 0x262280a
    ctx->pc = 0x17de00u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 19));
    // 0x17de04: 0x18a00010
    ctx->pc = 0x17DE04u;
    {
        const bool branch_taken_0x17de04 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x17de04) {
            ctx->pc = 0x17DE48u;
            goto label_17de48;
        }
    }
    ctx->pc = 0x17DE0Cu;
    // 0x17de0c: 0x200382d
    ctx->pc = 0x17de0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de10: 0x64a6ffff
    ctx->pc = 0x17de10u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 5) + (int64_t)4294967295);
    // 0x17de14: 0x0
    ctx->pc = 0x17de14u;
    // NOP
label_17de18:
    // 0x17de18: 0x6103c
    ctx->pc = 0x17de18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x17de1c: 0x2103f
    ctx->pc = 0x17de1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17de20: 0x12183c
    ctx->pc = 0x17de20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x17de24: 0x3183f
    ctx->pc = 0x17de24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x17de28: 0x471021
    ctx->pc = 0x17de28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x17de2c: 0x2831821
    ctx->pc = 0x17de2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x17de30: 0x90440000
    ctx->pc = 0x17de30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17de34: 0x66520001
    ctx->pc = 0x17de34u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)1);
    // 0x17de38: 0x64c6ffff
    ctx->pc = 0x17de38u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)4294967295);
    // 0x17de3c: 0x245102a
    ctx->pc = 0x17de3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 5)));
    // 0x17de40: 0x1440fff5
    ctx->pc = 0x17DE40u;
    {
        const bool branch_taken_0x17de40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DE44u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x17de40) {
            ctx->pc = 0x17DE18u;
            goto label_17de18;
        }
    }
    ctx->pc = 0x17DE48u;
label_17de48:
    // 0x17de48: 0x12103c
    ctx->pc = 0x17de48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x17de4c: 0x2103f
    ctx->pc = 0x17de4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17de50: 0xdfbf0060
    ctx->pc = 0x17de50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17de54: 0x2821021
    ctx->pc = 0x17de54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17de58: 0xdfb50050
    ctx->pc = 0x17de58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17de5c: 0xdfb40040
    ctx->pc = 0x17de5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17de60: 0xdfb30030
    ctx->pc = 0x17de60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17de64: 0xdfb20020
    ctx->pc = 0x17de64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17de68: 0xdfb10010
    ctx->pc = 0x17de68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17de6c: 0xdfb00000
    ctx->pc = 0x17de6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de70: 0xa0400000
    ctx->pc = 0x17de70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17de74: 0x3e00008
    ctx->pc = 0x17DE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DE78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DDA0u: goto label_17dda0;
            case 0x17DDE4u: goto label_17dde4;
            case 0x17DE18u: goto label_17de18;
            case 0x17DE48u: goto label_17de48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17DE7Cu;
}
