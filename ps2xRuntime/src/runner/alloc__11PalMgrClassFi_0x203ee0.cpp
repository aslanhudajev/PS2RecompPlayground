#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: alloc__11PalMgrClassFi
// Address: 0x203ee0 - 0x203f9c
void alloc__11PalMgrClassFi_0x203ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("alloc__11PalMgrClassFi");


    ctx->pc = 0x203ee0u;

    // 0x203ee0: 0x27bdffe0
    ctx->pc = 0x203ee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203ee4: 0x7fbf0010
    ctx->pc = 0x203ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x203ee8: 0x7fb00000
    ctx->pc = 0x203ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x203eec: 0x8c860000
    ctx->pc = 0x203eecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203ef0: 0x10c00013
    ctx->pc = 0x203EF0u;
    {
        const bool branch_taken_0x203ef0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x203EF4u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x203ef0) {
            ctx->pc = 0x203F40u;
            goto label_203f40;
        }
    }
    ctx->pc = 0x203EF8u;
label_203ef8:
    // 0x203ef8: 0x8cc7000c
    ctx->pc = 0x203ef8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x203efc: 0xe5102a
    ctx->pc = 0x203efcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
    // 0x203f00: 0x1440000b
    ctx->pc = 0x203F00u;
    {
        const bool branch_taken_0x203f00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x203f00) {
            ctx->pc = 0x203F30u;
            goto label_203f30;
        }
    }
    ctx->pc = 0x203F08u;
    // 0x203f08: 0x14600003
    ctx->pc = 0x203F08u;
    {
        const bool branch_taken_0x203f08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x203f08) {
            ctx->pc = 0x203F18u;
            goto label_203f18;
        }
    }
    ctx->pc = 0x203F10u;
    // 0x203f10: 0x10000007
    ctx->pc = 0x203F10u;
    {
        const bool branch_taken_0x203f10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203F14u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x203f10) {
            ctx->pc = 0x203F30u;
            goto label_203f30;
        }
    }
    ctx->pc = 0x203F18u;
label_203f18:
    // 0x203f18: 0x8c62000c
    ctx->pc = 0x203f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x203f1c: 0xe2082a
    ctx->pc = 0x203f1cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x203f20: 0x10200003
    ctx->pc = 0x203F20u;
    {
        const bool branch_taken_0x203f20 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x203f20) {
            ctx->pc = 0x203F30u;
            goto label_203f30;
        }
    }
    ctx->pc = 0x203F28u;
    // 0x203f28: 0x70c01e28
    ctx->pc = 0x203f28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x203f2c: 0x0
    ctx->pc = 0x203f2cu;
    // NOP
label_203f30:
    // 0x203f30: 0x8cc60004
    ctx->pc = 0x203f30u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x203f34: 0x14c0fff0
    ctx->pc = 0x203F34u;
    {
        const bool branch_taken_0x203f34 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x203f34) {
            ctx->pc = 0x203EF8u;
            goto label_203ef8;
        }
    }
    ctx->pc = 0x203F3Cu;
    // 0x203f3c: 0x0
    ctx->pc = 0x203f3cu;
    // NOP
label_203f40:
    // 0x203f40: 0x14600005
    ctx->pc = 0x203F40u;
    {
        const bool branch_taken_0x203f40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x203F44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
        if (branch_taken_0x203f40) {
            ctx->pc = 0x203F58u;
            goto label_203f58;
        }
    }
    ctx->pc = 0x203F48u;
    // 0x203f48: 0xc05114a
    ctx->pc = 0x203F48u;
    SET_GPR_U32(ctx, 31, 0x203F50u);
    ctx->pc = 0x203F4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 10016));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F50u; }
        else if (ctx->pc != 0x203F50u) { ctx->pc = 0x203F50u; }
    }
    if (ctx->pc != 0x203F50u) { return; }
    ctx->pc = 0x203F50u;
label_203f50:
    // 0x203f50: 0x1000ffff
    ctx->pc = 0x203F50u;
    {
        const bool branch_taken_0x203f50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x203f50) {
            ctx->pc = 0x203F50u;
            goto label_203f50;
        }
    }
    ctx->pc = 0x203F58u;
label_203f58:
    // 0x203f58: 0x8c62000c
    ctx->pc = 0x203f58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x203f5c: 0x14450005
    ctx->pc = 0x203F5Cu;
    {
        const bool branch_taken_0x203f5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x203F60u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 8)));
        if (branch_taken_0x203f5c) {
            ctx->pc = 0x203F74u;
            goto label_203f74;
        }
    }
    ctx->pc = 0x203F64u;
    // 0x203f64: 0xc080fa4
    ctx->pc = 0x203F64u;
    SET_GPR_U32(ctx, 31, 0x203F6Cu);
    ctx->pc = 0x203F68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x203E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        removeFreeBlock__11PalMgrClassFP7LMBlock_0x203e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F6Cu; }
        else if (ctx->pc != 0x203F6Cu) { ctx->pc = 0x203F6Cu; }
    }
    if (ctx->pc != 0x203F6Cu) { return; }
    ctx->pc = 0x203F6Cu;
    // 0x203f6c: 0x10000007
    ctx->pc = 0x203F6Cu;
    {
        const bool branch_taken_0x203f6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203F70u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x203f6c) {
            ctx->pc = 0x203F8Cu;
            goto label_203f8c;
        }
    }
    ctx->pc = 0x203F74u;
label_203f74:
    // 0x203f74: 0x451023
    ctx->pc = 0x203f74u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203f78: 0xac62000c
    ctx->pc = 0x203f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x203f7c: 0x8c620008
    ctx->pc = 0x203f7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x203f80: 0x451021
    ctx->pc = 0x203f80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203f84: 0xac620008
    ctx->pc = 0x203f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x203f88: 0x72001628
    ctx->pc = 0x203f88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_203f8c:
    // 0x203f8c: 0x7bbf0010
    ctx->pc = 0x203f8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203f90: 0x7bb00000
    ctx->pc = 0x203f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203f94: 0x3e00008
    ctx->pc = 0x203F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203EF8u: goto label_203ef8;
            case 0x203F18u: goto label_203f18;
            case 0x203F30u: goto label_203f30;
            case 0x203F40u: goto label_203f40;
            case 0x203F50u: goto label_203f50;
            case 0x203F58u: goto label_203f58;
            case 0x203F74u: goto label_203f74;
            case 0x203F8Cu: goto label_203f8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203F9Cu;
}
