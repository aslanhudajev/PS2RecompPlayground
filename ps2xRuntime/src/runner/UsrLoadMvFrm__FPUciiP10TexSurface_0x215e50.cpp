#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UsrLoadMvFrm__FPUciiP10TexSurface
// Address: 0x215e50 - 0x215f78
void UsrLoadMvFrm__FPUciiP10TexSurface_0x215e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UsrLoadMvFrm__FPUciiP10TexSurface");


    ctx->pc = 0x215e50u;

    // 0x215e50: 0x27bdff40
    ctx->pc = 0x215e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x215e54: 0x7fbf0090
    ctx->pc = 0x215e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x215e58: 0x7fbe0080
    ctx->pc = 0x215e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x215e5c: 0x7fb70070
    ctx->pc = 0x215e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x215e60: 0x7fb60060
    ctx->pc = 0x215e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x215e64: 0x7fb50050
    ctx->pc = 0x215e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x215e68: 0x7fb40040
    ctx->pc = 0x215e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x215e6c: 0x7fb30030
    ctx->pc = 0x215e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x215e70: 0x7fb20020
    ctx->pc = 0x215e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x215e74: 0x7fb10010
    ctx->pc = 0x215e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x215e78: 0x7fb00000
    ctx->pc = 0x215e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x215e7c: 0x7080be28
    ctx->pc = 0x215e7cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x215e80: 0x70c0ae28
    ctx->pc = 0x215e80u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x215e84: 0x70e0f628
    ctx->pc = 0x215e84u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x215e88: 0x4a10003
    ctx->pc = 0x215E88u;
    {
        const bool branch_taken_0x215e88 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x215E8Cu;
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 4));
        if (branch_taken_0x215e88) {
            ctx->pc = 0x215E98u;
            goto label_215e98;
        }
    }
    ctx->pc = 0x215E90u;
    // 0x215e90: 0x24a3000f
    ctx->pc = 0x215e90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 15));
    // 0x215e94: 0x38903
    ctx->pc = 0x215e94u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_215e98:
    // 0x215e98: 0x6a10003
    ctx->pc = 0x215E98u;
    {
        const bool branch_taken_0x215e98 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x215E9Cu;
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 21), 4));
        if (branch_taken_0x215e98) {
            ctx->pc = 0x215EA8u;
            goto label_215ea8;
        }
    }
    ctx->pc = 0x215EA0u;
    // 0x215ea0: 0x26a3000f
    ctx->pc = 0x215ea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 15));
    // 0x215ea4: 0x3b103
    ctx->pc = 0x215ea4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 4));
label_215ea8:
    // 0x215ea8: 0x11082a
    ctx->pc = 0x215ea8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x215eac: 0x10200026
    ctx->pc = 0x215EACu;
    {
        const bool branch_taken_0x215eac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x215EB0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x215eac) {
            ctx->pc = 0x215F48u;
            goto label_215f48;
        }
    }
    ctx->pc = 0x215EB4u;
    // 0x215eb4: 0x70009628
    ctx->pc = 0x215eb4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215eb8: 0x70009e28
    ctx->pc = 0x215eb8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x215ebc: 0x4a10003
    ctx->pc = 0x215EBCu;
    {
        const bool branch_taken_0x215ebc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x215EC0u;
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 6));
        if (branch_taken_0x215ebc) {
            ctx->pc = 0x215ECCu;
            goto label_215ecc;
        }
    }
    ctx->pc = 0x215EC4u;
    // 0x215ec4: 0x24a2003f
    ctx->pc = 0x215ec4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 63));
    // 0x215ec8: 0x2a183
    ctx->pc = 0x215ec8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 6));
label_215ecc:
    // 0x215ecc: 0x121280
    ctx->pc = 0x215eccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 10));
    // 0x215ed0: 0x2e21021
    ctx->pc = 0x215ed0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x215ed4: 0xafa200a0
    ctx->pc = 0x215ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x215ed8: 0x8fc30008
    ctx->pc = 0x215ed8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x215edc: 0x4610003
    ctx->pc = 0x215EDCu;
    {
        const bool branch_taken_0x215edc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x215EE0u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
        if (branch_taken_0x215edc) {
            ctx->pc = 0x215EECu;
            goto label_215eec;
        }
    }
    ctx->pc = 0x215EE4u;
    // 0x215ee4: 0x246200ff
    ctx->pc = 0x215ee4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 255));
    // 0x215ee8: 0x21203
    ctx->pc = 0x215ee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_215eec:
    // 0x215eec: 0xa7a200a4
    ctx->pc = 0x215eecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x215ef0: 0xa7b400a6
    ctx->pc = 0x215ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 166), (uint16_t)GPR_U32(ctx, 20));
    // 0x215ef4: 0xa7a000a8
    ctx->pc = 0x215ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x215ef8: 0xa7b300aa
    ctx->pc = 0x215ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 19));
    // 0x215efc: 0xa7a000ac
    ctx->pc = 0x215efcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 0));
    // 0x215f00: 0x24020010
    ctx->pc = 0x215f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x215f04: 0xa7a200ae
    ctx->pc = 0x215f04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 2));
    // 0x215f08: 0x27a400a0
    ctx->pc = 0x215f08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 160));
    // 0x215f0c: 0xc069ca0
    ctx->pc = 0x215F0Cu;
    SET_GPR_U32(ctx, 31, 0x215F14u);
    ctx->pc = 0x215F10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 21));
    ctx->pc = 0x1A7280u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPutLocalMem_0x1a7280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F14u; }
        else if (ctx->pc != 0x215F14u) { ctx->pc = 0x215F14u; }
    }
    if (ctx->pc != 0x215F14u) { return; }
    ctx->pc = 0x215F14u;
    // 0x215f14: 0x0
    ctx->pc = 0x215f14u;
    // NOP
label_215f18:
    // 0x215f18: 0x3c011001
    ctx->pc = 0x215f18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x215f1c: 0x8c239000
    ctx->pc = 0x215f1cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624))); // MMIO: 0x10009000
    // 0x215f20: 0x30630100
    ctx->pc = 0x215f20u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x215f24: 0x0
    ctx->pc = 0x215f24u;
    // NOP
    // 0x215f28: 0x0
    ctx->pc = 0x215f28u;
    // NOP
    // 0x215f2c: 0x1460fffa
    ctx->pc = 0x215F2Cu;
    {
        const bool branch_taken_0x215f2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x215f2c) {
            ctx->pc = 0x215F18u;
            goto label_215f18;
        }
    }
    ctx->pc = 0x215F34u;
    // 0x215f34: 0x26100001
    ctx->pc = 0x215f34u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x215f38: 0x211182a
    ctx->pc = 0x215f38u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x215f3c: 0x2569021
    ctx->pc = 0x215f3cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x215f40: 0x1460ffe2
    ctx->pc = 0x215F40u;
    {
        const bool branch_taken_0x215f40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x215F44u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 16));
        if (branch_taken_0x215f40) {
            ctx->pc = 0x215ECCu;
            goto label_215ecc;
        }
    }
    ctx->pc = 0x215F48u;
label_215f48:
    // 0x215f48: 0x7bbf0090
    ctx->pc = 0x215f48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x215f4c: 0x7bbe0080
    ctx->pc = 0x215f4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x215f50: 0x7bb70070
    ctx->pc = 0x215f50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x215f54: 0x7bb60060
    ctx->pc = 0x215f54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x215f58: 0x7bb50050
    ctx->pc = 0x215f58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215f5c: 0x7bb40040
    ctx->pc = 0x215f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215f60: 0x7bb30030
    ctx->pc = 0x215f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215f64: 0x7bb20020
    ctx->pc = 0x215f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215f68: 0x7bb10010
    ctx->pc = 0x215f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f6c: 0x7bb00000
    ctx->pc = 0x215f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215f70: 0x3e00008
    ctx->pc = 0x215F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215F74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215E98u: goto label_215e98;
            case 0x215EA8u: goto label_215ea8;
            case 0x215ECCu: goto label_215ecc;
            case 0x215EECu: goto label_215eec;
            case 0x215F18u: goto label_215f18;
            case 0x215F48u: goto label_215f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215F78u;
}
