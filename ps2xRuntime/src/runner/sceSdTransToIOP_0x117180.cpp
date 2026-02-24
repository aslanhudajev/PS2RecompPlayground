#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// transData struct at 0x17ad80 (0x180000 - 0x5280): param_1@+0, param_2@+4, param_3@+8, zero@+0xc
static constexpr uint32_t kTransDataBase = 0x17ad80u;

// sceSdTransToIOP(param_1, param_2, param_3, param_4): fill transData, call sceSifSetDma, optionally wait on DmaStat, return 0 on success
void sceSdTransToIOP_0x117180(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    const uint32_t param1 = getRegU32(ctx, 4);
    const uint32_t param2 = getRegU32(ctx, 5);
    const uint32_t param3 = getRegU32(ctx, 6);
    const uint32_t param4 = getRegU32(ctx, 7);

    WRITE32(kTransDataBase + 0u, param1);
    WRITE32(kTransDataBase + 4u, param2);
    WRITE32(kTransDataBase + 8u, param3);
    WRITE32(kTransDataBase + 12u, 0u);

    SET_GPR_U32(ctx, 4, kTransDataBase);
    SET_GPR_U32(ctx, 5, 1u);
    sceSifSetDma_0x10e660(rdram, ctx, runtime);
    const uint32_t setDmaResult = getRegU32(ctx, 2);

    if (param4 == 1u) {
        for (;;) {
            SET_GPR_U32(ctx, 4, setDmaResult);
            sceSifDmaStat_0x10e640(rdram, ctx, runtime);
            const int32_t stat = static_cast<int32_t>(getRegU32(ctx, 2));
            if (stat < 0)
                break;
        }
    }

    setReturnU32(ctx, setDmaResult != 0u ? 0u : 0xffffffffu);
    ctx->pc = getRegU32(ctx, 31);
}
