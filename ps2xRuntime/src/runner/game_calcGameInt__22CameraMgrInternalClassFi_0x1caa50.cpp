#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: game_calcGameInt__22CameraMgrInternalClassFi
// Address: 0x1caa50 - 0x1cac70
void game_calcGameInt__22CameraMgrInternalClassFi_0x1caa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("game_calcGameInt__22CameraMgrInternalClassFi");


    ctx->pc = 0x1caa50u;

    // 0x1caa50: 0x51840
    ctx->pc = 0x1caa50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1caa54: 0x651821
    ctx->pc = 0x1caa54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1caa58: 0x31880
    ctx->pc = 0x1caa58u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1caa5c: 0x651821
    ctx->pc = 0x1caa5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1caa60: 0x33900
    ctx->pc = 0x1caa60u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1caa64: 0x518c0
    ctx->pc = 0x1caa64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1caa68: 0x651821
    ctx->pc = 0x1caa68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1caa6c: 0x34980
    ctx->pc = 0x1caa6cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1caa70: 0x3c030030
    ctx->pc = 0x1caa70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1caa74: 0x24655c30
    ctx->pc = 0x1caa74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 23600));
    // 0x1caa78: 0x8f868c48
    ctx->pc = 0x1caa78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1caa7c: 0xa94021
    ctx->pc = 0x1caa7cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1caa80: 0x1242821
    ctx->pc = 0x1caa80u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1caa84: 0x25090150
    ctx->pc = 0x1caa84u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 8), 336));
    // 0x1caa88: 0xc71821
    ctx->pc = 0x1caa88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1caa8c: 0x8ca60010
    ctx->pc = 0x1caa8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1caa90: 0x83878bb4
    ctx->pc = 0x1caa90u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937524)));
    // 0x1caa94: 0x24630010
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1caa98: 0x630c0
    ctx->pc = 0x1caa98u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1caa9c: 0xc42021
    ctx->pc = 0x1caa9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1caaa0: 0x8c840904
    ctx->pc = 0x1caaa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2308)));
    // 0x1caaa4: 0x73100
    ctx->pc = 0x1caaa4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 4));
    // 0x1caaa8: 0xc73023
    ctx->pc = 0x1caaa8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1caaac: 0x63080
    ctx->pc = 0x1caaacu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1caab0: 0x1063021
    ctx->pc = 0x1caab0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1caab4: 0x24050001
    ctx->pc = 0x1caab4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caab8: 0x8c84000c
    ctx->pc = 0x1caab8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1caabc: 0x1085001b
    ctx->pc = 0x1CAABCu;
    {
        const bool branch_taken_0x1caabc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x1CAAC0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 396));
        if (branch_taken_0x1caabc) {
            ctx->pc = 0x1CAB2Cu;
            goto label_1cab2c;
        }
    }
    ctx->pc = 0x1CAAC4u;
    // 0x1caac4: 0x85240008
    ctx->pc = 0x1caac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1caac8: 0x480000e
    ctx->pc = 0x1CAAC8u;
    {
        const bool branch_taken_0x1caac8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1caac8) {
            ctx->pc = 0x1CAB04u;
            goto label_1cab04;
        }
    }
    ctx->pc = 0x1CAAD0u;
    // 0x1caad0: 0xc5200024
    ctx->pc = 0x1caad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caad4: 0xe4600098
    ctx->pc = 0x1caad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1caad8: 0xc5200028
    ctx->pc = 0x1caad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caadc: 0xe460009c
    ctx->pc = 0x1caadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x1caae0: 0xc520002c
    ctx->pc = 0x1caae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caae4: 0xe46000a0
    ctx->pc = 0x1caae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1caae8: 0xc4600098
    ctx->pc = 0x1caae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caaec: 0xe5000014
    ctx->pc = 0x1caaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x1caaf0: 0xc460009c
    ctx->pc = 0x1caaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caaf4: 0xe5000018
    ctx->pc = 0x1caaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1caaf8: 0xc46000a0
    ctx->pc = 0x1caaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caafc: 0x1000005a
    ctx->pc = 0x1CAAFCu;
    {
        const bool branch_taken_0x1caafc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CAB00u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
        if (branch_taken_0x1caafc) {
            ctx->pc = 0x1CAC68u;
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CAB04u;
label_1cab04:
    // 0x1cab04: 0xc4c00024
    ctx->pc = 0x1cab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab08: 0x24040001
    ctx->pc = 0x1cab08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cab0c: 0xe5000014
    ctx->pc = 0x1cab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x1cab10: 0xc4c00028
    ctx->pc = 0x1cab10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab14: 0xe5000018
    ctx->pc = 0x1cab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1cab18: 0xc4c0002c
    ctx->pc = 0x1cab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab1c: 0xe500001c
    ctx->pc = 0x1cab1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x1cab20: 0xa06400c3
    ctx->pc = 0x1cab20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 195), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cab24: 0x10000050
    ctx->pc = 0x1CAB24u;
    {
        const bool branch_taken_0x1cab24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CAB28u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 194), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1cab24) {
            ctx->pc = 0x1CAC68u;
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CAB2Cu;
label_1cab2c:
    // 0x1cab2c: 0x8d04014c
    ctx->pc = 0x1cab2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 332)));
    // 0x1cab30: 0x18800030
    ctx->pc = 0x1CAB30u;
    {
        const bool branch_taken_0x1cab30 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1cab30) {
            ctx->pc = 0x1CABF4u;
            goto label_1cabf4;
        }
    }
    ctx->pc = 0x1CAB38u;
    // 0x1cab38: 0xa1050046
    ctx->pc = 0x1cab38u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 70), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cab3c: 0xad000014
    ctx->pc = 0x1cab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x1cab40: 0xad000018
    ctx->pc = 0x1cab40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x1cab44: 0x44801800
    ctx->pc = 0x1cab44u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x1cab48: 0xad00001c
    ctx->pc = 0x1cab48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x1cab4c: 0x70002628
    ctx->pc = 0x1cab4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cab50: 0x10000017
    ctx->pc = 0x1CAB50u;
    {
        const bool branch_taken_0x1cab50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CAB54u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 76));
        if (branch_taken_0x1cab50) {
            ctx->pc = 0x1CABB0u;
            goto label_1cabb0;
        }
    }
    ctx->pc = 0x1CAB58u;
label_1cab58:
    // 0x1cab58: 0xc4a20000
    ctx->pc = 0x1cab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab5c: 0xc4a1000c
    ctx->pc = 0x1cab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cab60: 0xc5000014
    ctx->pc = 0x1cab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab64: 0x24840001
    ctx->pc = 0x1cab64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cab68: 0x46011042
    ctx->pc = 0x1cab68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cab6c: 0x46010000
    ctx->pc = 0x1cab6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cab70: 0xe5000014
    ctx->pc = 0x1cab70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x1cab74: 0xc4a20004
    ctx->pc = 0x1cab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab78: 0xc4a1000c
    ctx->pc = 0x1cab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cab7c: 0xc5000018
    ctx->pc = 0x1cab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab80: 0x46011042
    ctx->pc = 0x1cab80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cab84: 0x46010000
    ctx->pc = 0x1cab84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cab88: 0xe5000018
    ctx->pc = 0x1cab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1cab8c: 0xc4a20008
    ctx->pc = 0x1cab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cab90: 0xc4a1000c
    ctx->pc = 0x1cab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cab94: 0xc500001c
    ctx->pc = 0x1cab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cab98: 0x46011042
    ctx->pc = 0x1cab98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cab9c: 0x46010000
    ctx->pc = 0x1cab9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1caba0: 0xe500001c
    ctx->pc = 0x1caba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x1caba4: 0xc4a0000c
    ctx->pc = 0x1caba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caba8: 0x460018c0
    ctx->pc = 0x1caba8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1cabac: 0x24a50010
    ctx->pc = 0x1cabacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
label_1cabb0:
    // 0x1cabb0: 0x8d03014c
    ctx->pc = 0x1cabb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 332)));
    // 0x1cabb4: 0x83182a
    ctx->pc = 0x1cabb4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1cabb8: 0x1460ffe7
    ctx->pc = 0x1CABB8u;
    {
        const bool branch_taken_0x1cabb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1cabb8) {
            ctx->pc = 0x1CAB58u;
            goto label_1cab58;
        }
    }
    ctx->pc = 0x1CABC0u;
    // 0x1cabc0: 0xc5000014
    ctx->pc = 0x1cabc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cabc4: 0x0
    ctx->pc = 0x1cabc4u;
    // NOP
    // 0x1cabc8: 0x46030003
    ctx->pc = 0x1cabc8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1cabcc: 0xe5000014
    ctx->pc = 0x1cabccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x1cabd0: 0xc5000018
    ctx->pc = 0x1cabd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cabd4: 0x46030003
    ctx->pc = 0x1cabd4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1cabd8: 0xe5000018
    ctx->pc = 0x1cabd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1cabdc: 0xc500001c
    ctx->pc = 0x1cabdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cabe0: 0x46030003
    ctx->pc = 0x1cabe0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x1cabe4: 0x0
    ctx->pc = 0x1cabe4u;
    // NOP
    // 0x1cabe8: 0x0
    ctx->pc = 0x1cabe8u;
    // NOP
    // 0x1cabec: 0x1000001e
    ctx->pc = 0x1CABECu;
    {
        const bool branch_taken_0x1cabec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CABF0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
        if (branch_taken_0x1cabec) {
            ctx->pc = 0x1CAC68u;
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CABF4u;
label_1cabf4:
    // 0x1cabf4: 0xa1000046
    ctx->pc = 0x1cabf4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cabf8: 0x81040047
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 71)));
    // 0x1cabfc: 0x10800011
    ctx->pc = 0x1CABFCu;
    {
        const bool branch_taken_0x1cabfc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cabfc) {
            ctx->pc = 0x1CAC44u;
            goto label_1cac44;
        }
    }
    ctx->pc = 0x1CAC04u;
    // 0x1cac04: 0x85240008
    ctx->pc = 0x1cac04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cac08: 0x4800008
    ctx->pc = 0x1CAC08u;
    {
        const bool branch_taken_0x1cac08 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1cac08) {
            ctx->pc = 0x1CAC2Cu;
            goto label_1cac2c;
        }
    }
    ctx->pc = 0x1CAC10u;
    // 0x1cac10: 0xc5200024
    ctx->pc = 0x1cac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cac14: 0xe5000014
    ctx->pc = 0x1cac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x1cac18: 0xc5200028
    ctx->pc = 0x1cac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cac1c: 0xe5000018
    ctx->pc = 0x1cac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1cac20: 0xc520002c
    ctx->pc = 0x1cac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cac24: 0x10000007
    ctx->pc = 0x1CAC24u;
    {
        const bool branch_taken_0x1cac24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CAC28u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
        if (branch_taken_0x1cac24) {
            ctx->pc = 0x1CAC44u;
            goto label_1cac44;
        }
    }
    ctx->pc = 0x1CAC2Cu;
label_1cac2c:
    // 0x1cac2c: 0xc4c00024
    ctx->pc = 0x1cac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cac30: 0xe5000014
    ctx->pc = 0x1cac30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x1cac34: 0xc4c00028
    ctx->pc = 0x1cac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cac38: 0xe5000018
    ctx->pc = 0x1cac38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x1cac3c: 0xc4c0002c
    ctx->pc = 0x1cac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cac40: 0xe500001c
    ctx->pc = 0x1cac40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
label_1cac44:
    // 0x1cac44: 0x85250008
    ctx->pc = 0x1cac44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1cac48: 0x2404fffe
    ctx->pc = 0x1cac48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1cac4c: 0x14a40006
    ctx->pc = 0x1CAC4Cu;
    {
        const bool branch_taken_0x1cac4c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        if (branch_taken_0x1cac4c) {
            ctx->pc = 0x1CAC68u;
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CAC54u;
    // 0x1cac54: 0x806400c6
    ctx->pc = 0x1cac54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 198)));
    // 0x1cac58: 0x10800003
    ctx->pc = 0x1CAC58u;
    {
        const bool branch_taken_0x1cac58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cac58) {
            ctx->pc = 0x1CAC68u;
            goto label_1cac68;
        }
    }
    ctx->pc = 0x1CAC60u;
    // 0x1cac60: 0x24040001
    ctx->pc = 0x1cac60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cac64: 0xa06400c3
    ctx->pc = 0x1cac64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 195), (uint8_t)GPR_U32(ctx, 4));
label_1cac68:
    // 0x1cac68: 0x3e00008
    ctx->pc = 0x1CAC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAB04u: goto label_1cab04;
            case 0x1CAB2Cu: goto label_1cab2c;
            case 0x1CAB58u: goto label_1cab58;
            case 0x1CABB0u: goto label_1cabb0;
            case 0x1CABF4u: goto label_1cabf4;
            case 0x1CAC2Cu: goto label_1cac2c;
            case 0x1CAC44u: goto label_1cac44;
            case 0x1CAC68u: goto label_1cac68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CAC70u;
}
