#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: joinWaitLoop_main__10PlayerTaskFv
// Address: 0x20eee0 - 0x20efa4
void joinWaitLoop_main__10PlayerTaskFv_0x20eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("joinWaitLoop_main__10PlayerTaskFv");


    ctx->pc = 0x20eee0u;

    // 0x20eee0: 0x27bdffe0
    ctx->pc = 0x20eee0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20eee4: 0x7fbf0010
    ctx->pc = 0x20eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20eee8: 0x7fb00000
    ctx->pc = 0x20eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20eeec: 0x3c010050
    ctx->pc = 0x20eeecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20eef0: 0x8423e504
    ctx->pc = 0x20eef0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20eef4: 0x2402000a
    ctx->pc = 0x20eef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20eef8: 0x10620003
    ctx->pc = 0x20EEF8u;
    {
        const bool branch_taken_0x20eef8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20EEFCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20eef8) {
            ctx->pc = 0x20EF08u;
            goto label_20ef08;
        }
    }
    ctx->pc = 0x20EF00u;
    // 0x20ef00: 0x10000002
    ctx->pc = 0x20EF00u;
    {
        const bool branch_taken_0x20ef00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EF04u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ef00) {
            ctx->pc = 0x20EF0Cu;
            goto label_20ef0c;
        }
    }
    ctx->pc = 0x20EF08u;
label_20ef08:
    // 0x20ef08: 0x24050003
    ctx->pc = 0x20ef08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_20ef0c:
    // 0x20ef0c: 0xc083cb8
    ctx->pc = 0x20EF0Cu;
    SET_GPR_U32(ctx, 31, 0x20EF14u);
    ctx->pc = 0x20EF10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20F2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        checkCredAndStBtn__10PlayerTaskFi_0x20f2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EF14u; }
        else if (ctx->pc != 0x20EF14u) { ctx->pc = 0x20EF14u; }
    }
    if (ctx->pc != 0x20EF14u) { return; }
    ctx->pc = 0x20EF14u;
    // 0x20ef14: 0x8f838cb0
    ctx->pc = 0x20ef14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20ef18: 0x30630002
    ctx->pc = 0x20ef18u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x20ef1c: 0x1060000b
    ctx->pc = 0x20EF1Cu;
    {
        const bool branch_taken_0x20ef1c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EF20u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ef1c) {
            ctx->pc = 0x20EF4Cu;
            goto label_20ef4c;
        }
    }
    ctx->pc = 0x20EF24u;
    // 0x20ef24: 0x3c010050
    ctx->pc = 0x20ef24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20ef28: 0x8424e504
    ctx->pc = 0x20ef28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20ef2c: 0x2403000a
    ctx->pc = 0x20ef2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20ef30: 0x10830003
    ctx->pc = 0x20EF30u;
    {
        const bool branch_taken_0x20ef30 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x20EF34u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20ef30) {
            ctx->pc = 0x20EF40u;
            goto label_20ef40;
        }
    }
    ctx->pc = 0x20EF38u;
    // 0x20ef38: 0x10000003
    ctx->pc = 0x20EF38u;
    {
        const bool branch_taken_0x20ef38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ef38) {
            ctx->pc = 0x20EF48u;
            goto label_20ef48;
        }
    }
    ctx->pc = 0x20EF40u;
label_20ef40:
    // 0x20ef40: 0x10000003
    ctx->pc = 0x20EF40u;
    {
        const bool branch_taken_0x20ef40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EF44u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
        if (branch_taken_0x20ef40) {
            ctx->pc = 0x20EF50u;
            goto label_20ef50;
        }
    }
    ctx->pc = 0x20EF48u;
label_20ef48:
    // 0x20ef48: 0x70002e28
    ctx->pc = 0x20ef48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ef4c:
    // 0x20ef4c: 0x8e061cbc
    ctx->pc = 0x20ef4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
label_20ef50:
    // 0x20ef50: 0x24030009
    ctx->pc = 0x20ef50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x20ef54: 0x8cc40004
    ctx->pc = 0x20ef54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20ef58: 0x10830002
    ctx->pc = 0x20EF58u;
    {
        const bool branch_taken_0x20ef58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ef58) {
            ctx->pc = 0x20EF64u;
            goto label_20ef64;
        }
    }
    ctx->pc = 0x20EF60u;
    // 0x20ef60: 0x70002e28
    ctx->pc = 0x20ef60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ef64:
    // 0x20ef64: 0x10a0000b
    ctx->pc = 0x20EF64u;
    {
        const bool branch_taken_0x20ef64 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EF68u;
        WRITE8(ADD32(GPR_U32(ctx, 6), 201), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x20ef64) {
            ctx->pc = 0x20EF94u;
            goto label_20ef94;
        }
    }
    ctx->pc = 0x20EF6Cu;
    // 0x20ef6c: 0x8f838cb0
    ctx->pc = 0x20ef6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20ef70: 0x30630002
    ctx->pc = 0x20ef70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
    // 0x20ef74: 0x10600007
    ctx->pc = 0x20EF74u;
    {
        const bool branch_taken_0x20ef74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ef74) {
            ctx->pc = 0x20EF94u;
            goto label_20ef94;
        }
    }
    ctx->pc = 0x20EF7Cu;
    // 0x20ef7c: 0x8e031cbc
    ctx->pc = 0x20ef7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20ef80: 0x24040001
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ef84: 0xa06400c9
    ctx->pc = 0x20ef84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 201), (uint8_t)GPR_U32(ctx, 4));
    // 0x20ef88: 0x8e0327fc
    ctx->pc = 0x20ef88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10236)));
    // 0x20ef8c: 0x34630010
    ctx->pc = 0x20ef8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
    // 0x20ef90: 0xae0327fc
    ctx->pc = 0x20ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10236), GPR_U32(ctx, 3));
label_20ef94:
    // 0x20ef94: 0x7bbf0010
    ctx->pc = 0x20ef94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ef98: 0x7bb00000
    ctx->pc = 0x20ef98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ef9c: 0x3e00008
    ctx->pc = 0x20EF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EFA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EF08u: goto label_20ef08;
            case 0x20EF0Cu: goto label_20ef0c;
            case 0x20EF40u: goto label_20ef40;
            case 0x20EF48u: goto label_20ef48;
            case 0x20EF4Cu: goto label_20ef4c;
            case 0x20EF50u: goto label_20ef50;
            case 0x20EF64u: goto label_20ef64;
            case 0x20EF94u: goto label_20ef94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20EFA4u;
}
