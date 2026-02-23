#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetSightEnable__Fi
// Address: 0x1ee8e0 - 0x1ee94c
void GetSightEnable__Fi_0x1ee8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetSightEnable__Fi");


    ctx->pc = 0x1ee8e0u;

    // 0x1ee8e0: 0x27bdffe0
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee8e4: 0x7fbf0010
    ctx->pc = 0x1ee8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ee8e8: 0x7fb00000
    ctx->pc = 0x1ee8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee8ec: 0xc07bf9c
    ctx->pc = 0x1EE8ECu;
    SET_GPR_U32(ctx, 31, 0x1EE8F4u);
    ctx->pc = 0x1EE8F0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE8F4u; }
        else if (ctx->pc != 0x1EE8F4u) { ctx->pc = 0x1EE8F4u; }
    }
    if (ctx->pc != 0x1EE8F4u) { return; }
    ctx->pc = 0x1EE8F4u;
    // 0x1ee8f4: 0x24030003
    ctx->pc = 0x1ee8f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee8f8: 0x50430007
    ctx->pc = 0x1EE8F8u;
    {
        const bool branch_taken_0x1ee8f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ee8f8) {
            ctx->pc = 0x1EE8FCu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
            ctx->pc = 0x1EE918u;
            goto label_1ee918;
        }
    }
    ctx->pc = 0x1EE900u;
    // 0x1ee900: 0x24030002
    ctx->pc = 0x1ee900u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee904: 0x10430003
    ctx->pc = 0x1EE904u;
    {
        const bool branch_taken_0x1ee904 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ee904) {
            ctx->pc = 0x1EE914u;
            goto label_1ee914;
        }
    }
    ctx->pc = 0x1EE90Cu;
    // 0x1ee90c: 0x1000000b
    ctx->pc = 0x1EE90Cu;
    {
        const bool branch_taken_0x1ee90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EE910u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ee90c) {
            ctx->pc = 0x1EE93Cu;
            goto label_1ee93c;
        }
    }
    ctx->pc = 0x1EE914u;
label_1ee914:
    // 0x1ee914: 0x101080
    ctx->pc = 0x1ee914u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_1ee918:
    // 0x1ee918: 0x501821
    ctx->pc = 0x1ee918u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ee91c: 0x31080
    ctx->pc = 0x1ee91cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee920: 0x621021
    ctx->pc = 0x1ee920u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee924: 0x21880
    ctx->pc = 0x1ee924u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ee928: 0x3c020050
    ctx->pc = 0x1ee928u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ee92c: 0x2442db70
    ctx->pc = 0x1ee92cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x1ee930: 0x431021
    ctx->pc = 0x1ee930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee934: 0x8443000c
    ctx->pc = 0x1ee934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ee938: 0x3100a
    ctx->pc = 0x1ee938u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_1ee93c:
    // 0x1ee93c: 0x7bbf0010
    ctx->pc = 0x1ee93cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee940: 0x7bb00000
    ctx->pc = 0x1ee940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee944: 0x3e00008
    ctx->pc = 0x1EE944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EE914u: goto label_1ee914;
            case 0x1EE918u: goto label_1ee918;
            case 0x1EE93Cu: goto label_1ee93c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE94Cu;
}
