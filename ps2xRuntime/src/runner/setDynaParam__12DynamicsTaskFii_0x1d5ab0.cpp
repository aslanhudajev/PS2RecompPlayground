#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setDynaParam__12DynamicsTaskFii
// Address: 0x1d5ab0 - 0x1d5b20
void setDynaParam__12DynamicsTaskFii_0x1d5ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setDynaParam__12DynamicsTaskFii");


    ctx->pc = 0x1d5ab0u;

    // 0x1d5ab0: 0x27bdffc0
    ctx->pc = 0x1d5ab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5ab4: 0x7fbf0030
    ctx->pc = 0x1d5ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d5ab8: 0x7fb20020
    ctx->pc = 0x1d5ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d5abc: 0x7fb10010
    ctx->pc = 0x1d5abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5ac0: 0x7fb00000
    ctx->pc = 0x1d5ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5ac4: 0x70809628
    ctx->pc = 0x1d5ac4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d5ac8: 0x70c08628
    ctx->pc = 0x1d5ac8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1d5acc: 0x70a08e28
    ctx->pc = 0x1d5accu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d5ad0: 0x27848d4c
    ctx->pc = 0x1d5ad0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1d5ad4: 0xc07f208
    ctx->pc = 0x1D5AD4u;
    SET_GPR_U32(ctx, 31, 0x1D5ADCu);
    ctx->pc = 0x1D5AD8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FC820u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdrFcv__11MotMgrClassFi_0x1fc820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5ADCu; }
        else if (ctx->pc != 0x1D5ADCu) { ctx->pc = 0x1D5ADCu; }
    }
    if (ctx->pc != 0x1D5ADCu) { return; }
    ctx->pc = 0x1D5ADCu;
    // 0x1d5adc: 0x111880
    ctx->pc = 0x1d5adcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d5ae0: 0x722021
    ctx->pc = 0x1d5ae0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d5ae4: 0x101840
    ctx->pc = 0x1d5ae4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d5ae8: 0x3c0101fb
    ctx->pc = 0x1d5ae8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x1d5aec: 0xac820058
    ctx->pc = 0x1d5aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x1d5af0: 0x610821
    ctx->pc = 0x1d5af0u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1d5af4: 0x842373e4
    ctx->pc = 0x1d5af4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
    // 0x1d5af8: 0x44830000
    ctx->pc = 0x1d5af8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1d5afc: 0x0
    ctx->pc = 0x1d5afcu;
    // NOP
    // 0x1d5b00: 0x46800020
    ctx->pc = 0x1d5b00u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1d5b04: 0xe4800068
    ctx->pc = 0x1d5b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x1d5b08: 0x7bbf0030
    ctx->pc = 0x1d5b08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5b0c: 0x7bb20020
    ctx->pc = 0x1d5b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5b10: 0x7bb10010
    ctx->pc = 0x1d5b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5b14: 0x7bb00000
    ctx->pc = 0x1d5b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5b18: 0x3e00008
    ctx->pc = 0x1D5B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5B20u;
}
