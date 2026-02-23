#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setDynaParam__14TrnKomono2TaskFii
// Address: 0x220910 - 0x220974
void setDynaParam__14TrnKomono2TaskFii_0x220910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setDynaParam__14TrnKomono2TaskFii");


    ctx->pc = 0x220910u;

    // 0x220910: 0x27bdffc0
    ctx->pc = 0x220910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x220914: 0x7fbf0030
    ctx->pc = 0x220914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x220918: 0x7fb20020
    ctx->pc = 0x220918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22091c: 0x7fb10010
    ctx->pc = 0x22091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x220920: 0x7fb00000
    ctx->pc = 0x220920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x220924: 0x70809628
    ctx->pc = 0x220924u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x220928: 0x70c08628
    ctx->pc = 0x220928u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x22092c: 0x70a08e28
    ctx->pc = 0x22092cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x220930: 0x27848d4c
    ctx->pc = 0x220930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x220934: 0xc07f208
    ctx->pc = 0x220934u;
    SET_GPR_U32(ctx, 31, 0x22093Cu);
    ctx->pc = 0x220938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22093Cu; }
        else if (ctx->pc != 0x22093Cu) { ctx->pc = 0x22093Cu; }
    }
    if (ctx->pc != 0x22093Cu) { return; }
    ctx->pc = 0x22093Cu;
    // 0x22093c: 0x111880
    ctx->pc = 0x22093cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x220940: 0x722021
    ctx->pc = 0x220940u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x220944: 0x101840
    ctx->pc = 0x220944u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x220948: 0x3c0101fb
    ctx->pc = 0x220948u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x22094c: 0xac82001c
    ctx->pc = 0x22094cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x220950: 0x610821
    ctx->pc = 0x220950u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x220954: 0x842373e4
    ctx->pc = 0x220954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
    // 0x220958: 0xac83002c
    ctx->pc = 0x220958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x22095c: 0x7bbf0030
    ctx->pc = 0x22095cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220960: 0x7bb20020
    ctx->pc = 0x220960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220964: 0x7bb10010
    ctx->pc = 0x220964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220968: 0x7bb00000
    ctx->pc = 0x220968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22096c: 0x3e00008
    ctx->pc = 0x22096Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220970u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220974u;
}
