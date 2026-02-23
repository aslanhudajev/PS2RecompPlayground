#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _skipMB0
// Address: 0x160880 - 0x16094c
void _skipMB0_0x160880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_skipMB0");


    ctx->pc = 0x160880u;

    // 0x160880: 0x27bdffe0
    ctx->pc = 0x160880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160884: 0x3c020023
    ctx->pc = 0x160884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160888: 0xffb00000
    ctx->pc = 0x160888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16088c: 0x2442a838
    ctx->pc = 0x16088cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944824));
    // 0x160890: 0xffbf0010
    ctx->pc = 0x160890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160894: 0x24080140
    ctx->pc = 0x160894u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 320));
    // 0x160898: 0x240b0001
    ctx->pc = 0x160898u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16089c: 0x3c0c0023
    ctx->pc = 0x16089cu;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
    // 0x1608a0: 0x8c430280
    ctx->pc = 0x1608a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x1608a4: 0x3c090023
    ctx->pc = 0x1608a4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
    // 0x1608a8: 0x8d8aa3bc
    ctx->pc = 0x1608a8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 12), 4294943676)));
    // 0x1608ac: 0xe0802d
    ctx->pc = 0x1608acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608b0: 0x686818
    ctx->pc = 0x1608b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)(uint32_t)result); }
    // 0x1608b4: 0xad2ba47c
    ctx->pc = 0x1608b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294943868), GPR_U32(ctx, 11));
    // 0x1608b8: 0x24070002
    ctx->pc = 0x1608b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1608bc: 0x1a21821
    ctx->pc = 0x1608bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1608c0: 0x15470005
    ctx->pc = 0x1608C0u;
    {
        const bool branch_taken_0x1608c0 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 7));
        ctx->pc = 0x1608C4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 11));
        if (branch_taken_0x1608c0) {
            ctx->pc = 0x1608D8u;
            goto label_1608d8;
        }
    }
    ctx->pc = 0x1608C8u;
    // 0x1608c8: 0xac800000
    ctx->pc = 0x1608c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1608cc: 0xac800014
    ctx->pc = 0x1608ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1608d0: 0xac800010
    ctx->pc = 0x1608d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1608d4: 0xac800004
    ctx->pc = 0x1608d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1608d8:
    // 0x1608d8: 0x3c040023
    ctx->pc = 0x1608d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1608dc: 0x24030003
    ctx->pc = 0x1608dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1608e0: 0x8c82a3ec
    ctx->pc = 0x1608e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943724)));
    // 0x1608e4: 0x54430003
    ctx->pc = 0x1608E4u;
    {
        const bool branch_taken_0x1608e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1608e4) {
            ctx->pc = 0x1608E8u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
            ctx->pc = 0x1608F4u;
            goto label_1608f4;
        }
    }
    ctx->pc = 0x1608ECu;
    // 0x1608ec: 0x10000006
    ctx->pc = 0x1608ECu;
    {
        const bool branch_taken_0x1608ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1608F0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        if (branch_taken_0x1608ec) {
            ctx->pc = 0x160908u;
            goto label_160908;
        }
    }
    ctx->pc = 0x1608F4u;
label_1608f4:
    // 0x1608f4: 0x8c82a3ec
    ctx->pc = 0x1608f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943724)));
    // 0x1608f8: 0x38420002
    ctx->pc = 0x1608f8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x1608fc: 0x2c420001
    ctx->pc = 0x1608fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x160900: 0xacc20000
    ctx->pc = 0x160900u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x160904: 0xacc20004
    ctx->pc = 0x160904u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_160908:
    // 0x160908: 0x8d83a3bc
    ctx->pc = 0x160908u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 4294943676)));
    // 0x16090c: 0x24020001
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160910: 0x54620006
    ctx->pc = 0x160910u;
    {
        const bool branch_taken_0x160910 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x160910) {
            ctx->pc = 0x160914u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x16092Cu;
            goto label_16092c;
        }
    }
    ctx->pc = 0x160918u;
    // 0x160918: 0x3c04002c
    ctx->pc = 0x160918u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16091c: 0xc059112
    ctx->pc = 0x16091Cu;
    SET_GPR_U32(ctx, 31, 0x160924u);
    ctx->pc = 0x160920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937656));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160924u; }
        else if (ctx->pc != 0x160924u) { ctx->pc = 0x160924u; }
    }
    if (ctx->pc != 0x160924u) { return; }
    ctx->pc = 0x160924u;
    // 0x160924: 0x582d
    ctx->pc = 0x160924u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160928: 0x8e030000
    ctx->pc = 0x160928u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16092c:
    // 0x16092c: 0x2404fffe
    ctx->pc = 0x16092cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x160930: 0xdfbf0010
    ctx->pc = 0x160930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160934: 0x160102d
    ctx->pc = 0x160934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160938: 0x641824
    ctx->pc = 0x160938u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16093c: 0xae030000
    ctx->pc = 0x16093cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x160940: 0xdfb00000
    ctx->pc = 0x160940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160944: 0x3e00008
    ctx->pc = 0x160944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1608D8u: goto label_1608d8;
            case 0x1608F4u: goto label_1608f4;
            case 0x160908u: goto label_160908;
            case 0x16092Cu: goto label_16092c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16094Cu;
}
