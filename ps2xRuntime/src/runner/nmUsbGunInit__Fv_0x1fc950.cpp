#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nmUsbGunInit__Fv
// Address: 0x1fc950 - 0x1fc9dc
void nmUsbGunInit__Fv_0x1fc950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nmUsbGunInit__Fv");


    ctx->pc = 0x1fc950u;

    // 0x1fc950: 0x27bdfff0
    ctx->pc = 0x1fc950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc954: 0x7fbf0000
    ctx->pc = 0x1fc954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1fc958: 0xc055c62
    ctx->pc = 0x1FC958u;
    SET_GPR_U32(ctx, 31, 0x1FC960u);
    ctx->pc = 0x1FC95Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x157188u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x157188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC960u; }
        else if (ctx->pc != 0x1FC960u) { ctx->pc = 0x1FC960u; }
    }
    if (ctx->pc != 0x1FC960u) { return; }
    ctx->pc = 0x1FC960u;
label_1fc960:
    // 0x1fc960: 0x3c020052
    ctx->pc = 0x1fc960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fc964: 0x24449440
    ctx->pc = 0x1fc964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x1fc968: 0x3c027651
    ctx->pc = 0x1fc968u;
    SET_GPR_U32(ctx, 2, ((uint32_t)30289 << 16));
    // 0x1fc96c: 0x34450600
    ctx->pc = 0x1fc96cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 1536));
    // 0x1fc970: 0xc055dfe
    ctx->pc = 0x1FC970u;
    SET_GPR_U32(ctx, 31, 0x1FC978u);
    ctx->pc = 0x1FC974u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1577F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifBindRpc_0x1577f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC978u; }
        else if (ctx->pc != 0x1FC978u) { ctx->pc = 0x1FC978u; }
    }
    if (ctx->pc != 0x1FC978u) { return; }
    ctx->pc = 0x1FC978u;
    // 0x1fc978: 0x4410006
    ctx->pc = 0x1FC978u;
    {
        const bool branch_taken_0x1fc978 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1fc978) {
            ctx->pc = 0x1FC994u;
            goto label_1fc994;
        }
    }
    ctx->pc = 0x1FC980u;
    // 0x1fc980: 0x3c020027
    ctx->pc = 0x1fc980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1fc984: 0xc05114a
    ctx->pc = 0x1FC984u;
    SET_GPR_U32(ctx, 31, 0x1FC98Cu);
    ctx->pc = 0x1FC988u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294954784));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC98Cu; }
        else if (ctx->pc != 0x1FC98Cu) { ctx->pc = 0x1FC98Cu; }
    }
    if (ctx->pc != 0x1FC98Cu) { return; }
    ctx->pc = 0x1FC98Cu;
label_1fc98c:
    // 0x1fc98c: 0x1000ffff
    ctx->pc = 0x1FC98Cu;
    {
        const bool branch_taken_0x1fc98c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fc98c) {
            ctx->pc = 0x1FC98Cu;
            goto label_1fc98c;
        }
    }
    ctx->pc = 0x1FC994u;
label_1fc994:
    // 0x1fc994: 0x3c010052
    ctx->pc = 0x1fc994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fc998: 0x8c229464
    ctx->pc = 0x1fc998u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 4294939748)));
    // 0x1fc99c: 0x1440000b
    ctx->pc = 0x1FC99Cu;
    {
        const bool branch_taken_0x1fc99c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FC9A0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x1fc99c) {
            ctx->pc = 0x1FC9CCu;
            goto label_1fc9cc;
        }
    }
    ctx->pc = 0x1FC9A4u;
    // 0x1fc9a4: 0x0
    ctx->pc = 0x1fc9a4u;
    // NOP
label_1fc9a8:
    // 0x1fc9a8: 0x70601628
    ctx->pc = 0x1fc9a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1fc9ac: 0x2463ffff
    ctx->pc = 0x1fc9acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fc9b0: 0x0
    ctx->pc = 0x1fc9b0u;
    // NOP
    // 0x1fc9b4: 0x0
    ctx->pc = 0x1fc9b4u;
    // NOP
    // 0x1fc9b8: 0x0
    ctx->pc = 0x1fc9b8u;
    // NOP
    // 0x1fc9bc: 0x1440fffa
    ctx->pc = 0x1FC9BCu;
    {
        const bool branch_taken_0x1fc9bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fc9bc) {
            ctx->pc = 0x1FC9A8u;
            goto label_1fc9a8;
        }
    }
    ctx->pc = 0x1FC9C4u;
    // 0x1fc9c4: 0x1000ffe6
    ctx->pc = 0x1FC9C4u;
    {
        const bool branch_taken_0x1fc9c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fc9c4) {
            ctx->pc = 0x1FC960u;
            goto label_1fc960;
        }
    }
    ctx->pc = 0x1FC9CCu;
label_1fc9cc:
    // 0x1fc9cc: 0x7bbf0000
    ctx->pc = 0x1fc9ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc9d0: 0x70001628
    ctx->pc = 0x1fc9d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fc9d4: 0x3e00008
    ctx->pc = 0x1FC9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC9D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC960u: goto label_1fc960;
            case 0x1FC98Cu: goto label_1fc98c;
            case 0x1FC994u: goto label_1fc994;
            case 0x1FC9A8u: goto label_1fc9a8;
            case 0x1FC9CCu: goto label_1fc9cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC9DCu;
}
