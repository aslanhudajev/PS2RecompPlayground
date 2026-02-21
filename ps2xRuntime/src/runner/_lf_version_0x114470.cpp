#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lf_version
// Address: 0x114470 - 0x1144fc
void _lf_version_0x114470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x114470u;

    // 0x114470: 0x27bdffb0
    ctx->pc = 0x114470u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x114474: 0x3c020017
    ctx->pc = 0x114474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x114478: 0xffb30030
    ctx->pc = 0x114478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11447c: 0x3c030018
    ctx->pc = 0x11447cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
    // 0x114480: 0xffb10010
    ctx->pc = 0x114480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x114484: 0x2453f378
    ctx->pc = 0x114484u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294964088));
    // 0x114488: 0xffb20020
    ctx->pc = 0x114488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11448c: 0x24719e68
    ctx->pc = 0x11448cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294942312));
    // 0x114490: 0xffbf0040
    ctx->pc = 0x114490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x114494: 0x902d
    ctx->pc = 0x114494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114498: 0xffb00000
    ctx->pc = 0x114498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11449c: 0x220202d
    ctx->pc = 0x11449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144a0: 0x260282d
    ctx->pc = 0x1144a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144a4: 0xc04ac0e
    ctx->pc = 0x1144A4u;
    SET_GPR_U32(ctx, 31, 0x1144ACu);
    ctx->pc = 0x1144A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x12B038u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144ACu; }
    }
    if (ctx->pc != 0x1144ACu) { return; }
    ctx->pc = 0x1144ACu;
    // 0x1144ac: 0x1040000b
    ctx->pc = 0x1144ACu;
    {
        const bool branch_taken_0x1144ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1144B0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
        if (branch_taken_0x1144ac) {
            ctx->pc = 0x1144DCu;
            goto label_1144dc;
        }
    }
    ctx->pc = 0x1144B4u;
    // 0x1144b4: 0x220202d
    ctx->pc = 0x1144b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144b8: 0x8e05fbd4
    ctx->pc = 0x1144b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294966228)));
    // 0x1144bc: 0xc04ac0e
    ctx->pc = 0x1144BCu;
    SET_GPR_U32(ctx, 31, 0x1144C4u);
    ctx->pc = 0x1144C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x12B038u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144C4u; }
    }
    if (ctx->pc != 0x1144C4u) { return; }
    ctx->pc = 0x1144C4u;
    // 0x1144c4: 0x10400005
    ctx->pc = 0x1144C4u;
    {
        const bool branch_taken_0x1144c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1144C8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294966228)));
        if (branch_taken_0x1144c4) {
            ctx->pc = 0x1144DCu;
            goto label_1144dc;
        }
    }
    ctx->pc = 0x1144CCu;
    // 0x1144cc: 0x260202d
    ctx->pc = 0x1144ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144d0: 0xc04ac0e
    ctx->pc = 0x1144D0u;
    SET_GPR_U32(ctx, 31, 0x1144D8u);
    ctx->pc = 0x1144D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x12B038u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x12b038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144D8u; }
    }
    if (ctx->pc != 0x1144D8u) { return; }
    ctx->pc = 0x1144D8u;
    // 0x1144d8: 0x2902b
    ctx->pc = 0x1144d8u;
    SET_GPR_U32(ctx, 18, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1144dc:
    // 0x1144dc: 0x240102d
    ctx->pc = 0x1144dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144e0: 0xdfbf0040
    ctx->pc = 0x1144e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1144e4: 0xdfb30030
    ctx->pc = 0x1144e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1144e8: 0xdfb20020
    ctx->pc = 0x1144e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1144ec: 0xdfb10010
    ctx->pc = 0x1144ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1144f0: 0xdfb00000
    ctx->pc = 0x1144f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1144f4: 0x3e00008
    ctx->pc = 0x1144F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1144F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1144DCu: goto label_1144dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1144FCu;
}
