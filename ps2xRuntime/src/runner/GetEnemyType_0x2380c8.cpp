#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetEnemyType
// Address: 0x2380c8 - 0x23818c
void GetEnemyType_0x2380c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2380c8u;

    // 0x2380c8: 0x27bdffc0
    ctx->pc = 0x2380c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2380cc: 0xffbf0030
    ctx->pc = 0x2380ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2380d0: 0xffb20020
    ctx->pc = 0x2380d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2380d4: 0xffb10010
    ctx->pc = 0x2380d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2380d8: 0xffb00000
    ctx->pc = 0x2380d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2380dc: 0x80882d
    ctx->pc = 0x2380dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380e0: 0x220802d
    ctx->pc = 0x2380e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380e4: 0x24020003
    ctx->pc = 0x2380e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2380e8: 0x16020003
    ctx->pc = 0x2380E8u;
    {
        const bool branch_taken_0x2380e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2380ECu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2380e8) {
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x2380F0u;
    // 0x2380f0: 0x3c020034
    ctx->pc = 0x2380f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2380f4: 0x8c50e844
    ctx->pc = 0x2380f4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294961220)));
label_2380f8:
    // 0x2380f8: 0x2622fffc
    ctx->pc = 0x2380f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2380fc: 0x2c420002
    ctx->pc = 0x2380fcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x238100: 0x10400010
    ctx->pc = 0x238100u;
    {
        const bool branch_taken_0x238100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x238104u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
        if (branch_taken_0x238100) {
            ctx->pc = 0x238144u;
            goto label_238144;
        }
    }
    ctx->pc = 0x238108u;
    // 0x238108: 0x14400006
    ctx->pc = 0x238108u;
    {
        const bool branch_taken_0x238108 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23810Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x238108) {
            ctx->pc = 0x238124u;
            goto label_238124;
        }
    }
    ctx->pc = 0x238110u;
    // 0x238110: 0x3c020034
    ctx->pc = 0x238110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x238114: 0x8c42e850
    ctx->pc = 0x238114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961232)));
    // 0x238118: 0x443000a
    ctx->pc = 0x238118u;
    {
        const bool branch_taken_0x238118 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x238118) {
            ctx->pc = 0x23811Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x238144u;
            goto label_238144;
        }
    }
    ctx->pc = 0x238120u;
    // 0x238120: 0x3c020034
    ctx->pc = 0x238120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_238124:
    // 0x238124: 0x8c42e848
    ctx->pc = 0x238124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961224)));
    // 0x238128: 0x4430006
    ctx->pc = 0x238128u;
    {
        const bool branch_taken_0x238128 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x238128) {
            ctx->pc = 0x23812Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x238144u;
            goto label_238144;
        }
    }
    ctx->pc = 0x238130u;
    // 0x238130: 0x3c020034
    ctx->pc = 0x238130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x238134: 0x8c42e84c
    ctx->pc = 0x238134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x238138: 0x4420003
    ctx->pc = 0x238138u;
    {
        const bool branch_taken_0x238138 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x238138) {
            ctx->pc = 0x23813Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x238148u;
            goto label_238148;
        }
    }
    ctx->pc = 0x238140u;
    // 0x238140: 0x40802d
    ctx->pc = 0x238140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_238144:
    // 0x238144: 0x2402ffff
    ctx->pc = 0x238144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_238148:
    // 0x238148: 0x1602000a
    ctx->pc = 0x238148u;
    {
        const bool branch_taken_0x238148 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x23814Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x238148) {
            ctx->pc = 0x238174u;
            goto label_238174;
        }
    }
    ctx->pc = 0x238150u;
    // 0x238150: 0xc08dbf4
    ctx->pc = 0x238150u;
    SET_GPR_U32(ctx, 31, 0x238158u);
    ctx->pc = 0x238154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypeDesc_0x236fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238158u; }
    }
    if (ctx->pc != 0x238158u) { return; }
    ctx->pc = 0x238158u;
    // 0x238158: 0x3c04003a
    ctx->pc = 0x238158u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x23815c: 0x24847cf0
    ctx->pc = 0x23815cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31984));
    // 0x238160: 0x40282d
    ctx->pc = 0x238160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238164: 0x220302d
    ctx->pc = 0x238164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238168: 0xc0b492e
    ctx->pc = 0x238168u;
    SET_GPR_U32(ctx, 31, 0x238170u);
    ctx->pc = 0x23816Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238170u; }
    }
    if (ctx->pc != 0x238170u) { return; }
    ctx->pc = 0x238170u;
    // 0x238170: 0x200102d
    ctx->pc = 0x238170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238174:
    // 0x238174: 0xdfbf0030
    ctx->pc = 0x238174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238178: 0xdfb20020
    ctx->pc = 0x238178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23817c: 0xdfb10010
    ctx->pc = 0x23817cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238180: 0xdfb00000
    ctx->pc = 0x238180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238184: 0x3e00008
    ctx->pc = 0x238184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238188u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2380F8u: goto label_2380f8;
            case 0x238124u: goto label_238124;
            case 0x238144u: goto label_238144;
            case 0x238148u: goto label_238148;
            case 0x238174u: goto label_238174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23818Cu;
}
