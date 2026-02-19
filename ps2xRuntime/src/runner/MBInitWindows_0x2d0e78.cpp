#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitWindows
// Address: 0x2d0e78 - 0x2d0f4c
void MBInitWindows_0x2d0e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0e78u;

    // 0x2d0e78: 0x27bdff90
    ctx->pc = 0x2d0e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d0e7c: 0xffbf0060
    ctx->pc = 0x2d0e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d0e80: 0xffb50050
    ctx->pc = 0x2d0e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2d0e84: 0xffb40040
    ctx->pc = 0x2d0e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d0e88: 0xffb30030
    ctx->pc = 0x2d0e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d0e8c: 0xffb20020
    ctx->pc = 0x2d0e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0e90: 0xffb10010
    ctx->pc = 0x2d0e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d0e94: 0xffb00000
    ctx->pc = 0x2d0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0e98: 0x3c020038
    ctx->pc = 0x2d0e98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2d0e9c: 0x2442b1a8
    ctx->pc = 0x2d0e9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947240));
    // 0x2d0ea0: 0xac400008
    ctx->pc = 0x2d0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2d0ea4: 0xac40000c
    ctx->pc = 0x2d0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2d0ea8: 0x802d
    ctx->pc = 0x2d0ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0eac: 0x3c15003a
    ctx->pc = 0x2d0eacu;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2d0eb0: 0x241401c0
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 448));
    // 0x2d0eb4: 0x3c02003a
    ctx->pc = 0x2d0eb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d0eb8: 0x245314d0
    ctx->pc = 0x2d0eb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2d0ebc: 0x3c12003a
    ctx->pc = 0x2d0ebcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2d0ec0: 0x3c11003a
    ctx->pc = 0x2d0ec0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2d0ec4: 0x2141818
    ctx->pc = 0x2d0ec4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2d0ec8:
    // 0x2d0ec8: 0x731021
    ctx->pc = 0x2d0ec8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d0ecc: 0xaea21bd0
    ctx->pc = 0x2d0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 7120), GPR_U32(ctx, 2));
    // 0x2d0ed0: 0xac500148
    ctx->pc = 0x2d0ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x2d0ed4: 0x3c013f49
    ctx->pc = 0x2d0ed4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
    // 0x2d0ed8: 0x34210fdb
    ctx->pc = 0x2d0ed8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d0edc: 0x44816000
    ctx->pc = 0x2d0edcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d0ee0: 0x3c013f16
    ctx->pc = 0x2d0ee0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16150 << 16));
    // 0x2d0ee4: 0x3421cbe5
    ctx->pc = 0x2d0ee4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52197));
    // 0x2d0ee8: 0x44816800
    ctx->pc = 0x2d0ee8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2d0eec: 0xc0b4546
    ctx->pc = 0x2D0EECu;
    SET_GPR_U32(ctx, 31, 0x2D0EF4u);
    ctx->pc = 0x2D0EF0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
    ctx->pc = 0x2D1518u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowInit_0x2d1518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0EF4u; }
    }
    if (ctx->pc != 0x2D0EF4u) { return; }
    ctx->pc = 0x2D0EF4u;
    // 0x2d0ef4: 0x264424c0
    ctx->pc = 0x2d0ef4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 9408));
    // 0x2d0ef8: 0xc0b0f84
    ctx->pc = 0x2D0EF8u;
    SET_GPR_U32(ctx, 31, 0x2D0F00u);
    ctx->pc = 0x2D0EFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 9552));
    ctx->pc = 0x2C3E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCameraUpdate_0x2c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0F00u; }
    }
    if (ctx->pc != 0x2D0F00u) { return; }
    ctx->pc = 0x2D0F00u;
    // 0x2d0f00: 0x26100001
    ctx->pc = 0x2d0f00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d0f04: 0x2a020004
    ctx->pc = 0x2d0f04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2d0f08: 0x1440ffef
    ctx->pc = 0x2D0F08u;
    {
        const bool branch_taken_0x2d0f08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D0F0Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2d0f08) {
            ctx->pc = 0x2D0EC8u;
            goto label_2d0ec8;
        }
    }
    ctx->pc = 0x2D0F10u;
    // 0x2d0f10: 0x3c02003a
    ctx->pc = 0x2d0f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d0f14: 0x3c03003a
    ctx->pc = 0x2d0f14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d0f18: 0x246314d0
    ctx->pc = 0x2d0f18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5328));
    // 0x2d0f1c: 0xac431bd0
    ctx->pc = 0x2d0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7120), GPR_U32(ctx, 3));
    // 0x2d0f20: 0x24020001
    ctx->pc = 0x2d0f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0f24: 0xac62014c
    ctx->pc = 0x2d0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
    // 0x2d0f28: 0xdfbf0060
    ctx->pc = 0x2d0f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d0f2c: 0xdfb50050
    ctx->pc = 0x2d0f2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0f30: 0xdfb40040
    ctx->pc = 0x2d0f30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0f34: 0xdfb30030
    ctx->pc = 0x2d0f34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0f38: 0xdfb20020
    ctx->pc = 0x2d0f38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0f3c: 0xdfb10010
    ctx->pc = 0x2d0f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0f40: 0xdfb00000
    ctx->pc = 0x2d0f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0f44: 0x3e00008
    ctx->pc = 0x2D0F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0F48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0EC8u: goto label_2d0ec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0F4Cu;
}
