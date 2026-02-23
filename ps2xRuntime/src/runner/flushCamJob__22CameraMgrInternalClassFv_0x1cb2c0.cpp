#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: flushCamJob__22CameraMgrInternalClassFv
// Address: 0x1cb2c0 - 0x1cb358
void flushCamJob__22CameraMgrInternalClassFv_0x1cb2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("flushCamJob__22CameraMgrInternalClassFv");


    ctx->pc = 0x1cb2c0u;

    // 0x1cb2c0: 0x84830902
    ctx->pc = 0x1cb2c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2306)));
    // 0x1cb2c4: 0x70005628
    ctx->pc = 0x1cb2c4u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb2c8: 0x70805e28
    ctx->pc = 0x1cb2c8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1cb2cc: 0x70006628
    ctx->pc = 0x1cb2ccu;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb2d0: 0xa4830900
    ctx->pc = 0x1cb2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2304), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cb2d4: 0x3c030026
    ctx->pc = 0x1cb2d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1cb2d8: 0x2409ffff
    ctx->pc = 0x1cb2d8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb2dc: 0x24684f28
    ctx->pc = 0x1cb2dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 20264));
    // 0x1cb2e0: 0x2407fffe
    ctx->pc = 0x1cb2e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1cb2e4: 0x24060001
    ctx->pc = 0x1cb2e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_1cb2e8:
    // 0x1cb2e8: 0xad690000
    ctx->pc = 0x1cb2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x1cb2ec: 0xc5020000
    ctx->pc = 0x1cb2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb2f0: 0xc5010004
    ctx->pc = 0x1cb2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb2f4: 0xc5000008
    ctx->pc = 0x1cb2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb2f8: 0x254a0001
    ctx->pc = 0x1cb2f8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cb2fc: 0x29430004
    ctx->pc = 0x1cb2fcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), 4));
    // 0x1cb300: 0xe5620004
    ctx->pc = 0x1cb300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x1cb304: 0xe5610008
    ctx->pc = 0x1cb304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x1cb308: 0xe560000c
    ctx->pc = 0x1cb308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x1cb30c: 0xa5670158
    ctx->pc = 0x1cb30cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 344), (uint16_t)GPR_U32(ctx, 7));
    // 0x1cb310: 0xa5670194
    ctx->pc = 0x1cb310u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 404), (uint16_t)GPR_U32(ctx, 7));
    // 0x1cb314: 0xa56701d0
    ctx->pc = 0x1cb314u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 464), (uint16_t)GPR_U32(ctx, 7));
    // 0x1cb318: 0xa567020c
    ctx->pc = 0x1cb318u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 524), (uint16_t)GPR_U32(ctx, 7));
    // 0x1cb31c: 0x8f858c48
    ctx->pc = 0x1cb31cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1cb320: 0x256b0240
    ctx->pc = 0x1cb320u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 576));
    // 0x1cb324: 0xac2821
    ctx->pc = 0x1cb324u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1cb328: 0xa0a600d5
    ctx->pc = 0x1cb328u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 213), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cb32c: 0x1460ffee
    ctx->pc = 0x1CB32Cu;
    {
        const bool branch_taken_0x1cb32c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CB330u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 208));
        if (branch_taken_0x1cb32c) {
            ctx->pc = 0x1CB2E8u;
            goto label_1cb2e8;
        }
    }
    ctx->pc = 0x1CB334u;
    // 0x1cb334: 0xa0800908
    ctx->pc = 0x1cb334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2312), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb338: 0xa0800910
    ctx->pc = 0x1cb338u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2320), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb33c: 0xa0800918
    ctx->pc = 0x1cb33cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2328), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb340: 0xa0800920
    ctx->pc = 0x1cb340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2336), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb344: 0xa0800928
    ctx->pc = 0x1cb344u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2344), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb348: 0xa0800930
    ctx->pc = 0x1cb348u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2352), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb34c: 0xa0800938
    ctx->pc = 0x1cb34cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2360), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb350: 0x3e00008
    ctx->pc = 0x1CB350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB354u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 2368), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB2E8u: goto label_1cb2e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CB358u;
}
