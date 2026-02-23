#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_AdjustEtrg
// Address: 0x19b120 - 0x19b1c0
void sfply_AdjustEtrg_0x19b120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_AdjustEtrg");


    ctx->pc = 0x19b120u;

    // 0x19b120: 0x27bdffe0
    ctx->pc = 0x19b120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b124: 0x24060001
    ctx->pc = 0x19b124u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b128: 0xffb00000
    ctx->pc = 0x19b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b12c: 0x24050002
    ctx->pc = 0x19b12cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b130: 0xffbf0010
    ctx->pc = 0x19b130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b134: 0x80802d
    ctx->pc = 0x19b134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b138: 0x26040994
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2452));
    // 0x19b13c: 0x8c820018
    ctx->pc = 0x19b13cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19b140: 0x8c830014
    ctx->pc = 0x19b140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19b144: 0x38420001
    ctx->pc = 0x19b144u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x19b148: 0x202d
    ctx->pc = 0x19b148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b14c: 0xc2200a
    ctx->pc = 0x19b14cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 6));
    // 0x19b150: 0x38630001
    ctx->pc = 0x19b150u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x19b154: 0x34820002
    ctx->pc = 0x19b154u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 2));
    // 0x19b158: 0x43200a
    ctx->pc = 0x19b158u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x19b15c: 0x1085000b
    ctx->pc = 0x19B15Cu;
    {
        const bool branch_taken_0x19b15c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x19B160u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x19b15c) {
            ctx->pc = 0x19B18Cu;
            goto label_19b18c;
        }
    }
    ctx->pc = 0x19B164u;
    // 0x19b164: 0x10400005
    ctx->pc = 0x19B164u;
    {
        const bool branch_taken_0x19b164 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B168u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x19b164) {
            ctx->pc = 0x19B17Cu;
            goto label_19b17c;
        }
    }
    ctx->pc = 0x19B16Cu;
    // 0x19b16c: 0x5086000d
    ctx->pc = 0x19B16Cu;
    {
        const bool branch_taken_0x19b16c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 6));
        if (branch_taken_0x19b16c) {
            ctx->pc = 0x19B170u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x19B1A4u;
            goto label_19b1a4;
        }
    }
    ctx->pc = 0x19B174u;
    // 0x19b174: 0x1000000c
    ctx->pc = 0x19B174u;
    {
        const bool branch_taken_0x19b174 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B178u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b174) {
            ctx->pc = 0x19B1A8u;
            goto label_19b1a8;
        }
    }
    ctx->pc = 0x19B17Cu;
label_19b17c:
    // 0x19b17c: 0x10820005
    ctx->pc = 0x19B17Cu;
    {
        const bool branch_taken_0x19b17c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x19B180u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b17c) {
            ctx->pc = 0x19B194u;
            goto label_19b194;
        }
    }
    ctx->pc = 0x19B184u;
    // 0x19b184: 0x10000009
    ctx->pc = 0x19B184u;
    {
        const bool branch_taken_0x19b184 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B188u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19b184) {
            ctx->pc = 0x19B1ACu;
            goto label_19b1ac;
        }
    }
    ctx->pc = 0x19B18Cu;
label_19b18c:
    // 0x19b18c: 0x10000005
    ctx->pc = 0x19B18Cu;
    {
        const bool branch_taken_0x19b18c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B190u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19b18c) {
            ctx->pc = 0x19B1A4u;
            goto label_19b1a4;
        }
    }
    ctx->pc = 0x19B194u;
label_19b194:
    // 0x19b194: 0xc0674c2
    ctx->pc = 0x19B194u;
    SET_GPR_U32(ctx, 31, 0x19B19Cu);
    ctx->pc = 0x19B198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B19Cu; }
        else if (ctx->pc != 0x19B19Cu) { ctx->pc = 0x19B19Cu; }
    }
    if (ctx->pc != 0x19B19Cu) { return; }
    ctx->pc = 0x19B19Cu;
    // 0x19b19c: 0x10000002
    ctx->pc = 0x19B19Cu;
    {
        const bool branch_taken_0x19b19c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B1A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b19c) {
            ctx->pc = 0x19B1A8u;
            goto label_19b1a8;
        }
    }
    ctx->pc = 0x19B1A4u;
label_19b1a4:
    // 0x19b1a4: 0x200202d
    ctx->pc = 0x19b1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b1a8:
    // 0x19b1a8: 0xdfbf0010
    ctx->pc = 0x19b1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19b1ac:
    // 0x19b1ac: 0xdfb00000
    ctx->pc = 0x19b1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b1b0: 0x40302d
    ctx->pc = 0x19b1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1b4: 0x24050019
    ctx->pc = 0x19b1b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 25));
    // 0x19b1b8: 0x8067464
    ctx->pc = 0x19B1B8u;
    ctx->pc = 0x19B1BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x19D190u;
    SFSET_SetCond_0x19d190(rdram, ctx, runtime); return;
    ctx->pc = 0x19B1C0u;
}
