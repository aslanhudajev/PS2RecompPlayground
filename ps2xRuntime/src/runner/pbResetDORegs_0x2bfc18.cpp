#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetDORegs
// Address: 0x2bfc18 - 0x2bfd10
void pbResetDORegs_0x2bfc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bfc18u;

    // 0x2bfc18: 0x3c020037
    ctx->pc = 0x2bfc18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bfc1c: 0x8c42276c
    ctx->pc = 0x2bfc1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10092)));
    // 0x2bfc20: 0x2404ffff
    ctx->pc = 0x2bfc20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bfc24: 0xac4400bc
    ctx->pc = 0x2bfc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 4));
    // 0x2bfc28: 0x2403ff00
    ctx->pc = 0x2bfc28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2bfc2c: 0xac4300c0
    ctx->pc = 0x2bfc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x2bfc30: 0xac4400c4
    ctx->pc = 0x2bfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
    // 0x2bfc34: 0xac4400c8
    ctx->pc = 0x2bfc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 4));
    // 0x2bfc38: 0xac4400cc
    ctx->pc = 0x2bfc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 4));
    // 0x2bfc3c: 0xac4000d0
    ctx->pc = 0x2bfc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x2bfc40: 0x24030001
    ctx->pc = 0x2bfc40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfc44: 0xac4300e0
    ctx->pc = 0x2bfc44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
    // 0x2bfc48: 0xac4000d4
    ctx->pc = 0x2bfc48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x2bfc4c: 0xac4000b8
    ctx->pc = 0x2bfc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x2bfc50: 0xac4000d8
    ctx->pc = 0x2bfc50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x2bfc54: 0xac4000dc
    ctx->pc = 0x2bfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
    // 0x2bfc58: 0x24030004
    ctx->pc = 0x2bfc58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bfc5c: 0xac4300b4
    ctx->pc = 0x2bfc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
    // 0x2bfc60: 0x3c014300
    ctx->pc = 0x2bfc60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17152 << 16));
    // 0x2bfc64: 0x44810000
    ctx->pc = 0x2bfc64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2bfc68: 0xe4400010
    ctx->pc = 0x2bfc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2bfc6c: 0xe4400018
    ctx->pc = 0x2bfc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2bfc70: 0xe4400014
    ctx->pc = 0x2bfc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2bfc74: 0xe440001c
    ctx->pc = 0x2bfc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2bfc78: 0x3c014380
    ctx->pc = 0x2bfc78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17280 << 16));
    // 0x2bfc7c: 0x44810000
    ctx->pc = 0x2bfc7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2bfc80: 0xe4400020
    ctx->pc = 0x2bfc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2bfc84: 0xe4400024
    ctx->pc = 0x2bfc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2bfc88: 0xac400028
    ctx->pc = 0x2bfc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2bfc8c: 0xac40002c
    ctx->pc = 0x2bfc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2bfc90: 0x2405ffff
    ctx->pc = 0x2bfc90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bfc94: 0xfc450030
    ctx->pc = 0x2bfc94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 5));
    // 0x2bfc98: 0x3c04ffff
    ctx->pc = 0x2bfc98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2bfc9c: 0x3484ffff
    ctx->pc = 0x2bfc9cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2bfca0: 0xac440040
    ctx->pc = 0x2bfca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x2bfca4: 0xac400038
    ctx->pc = 0x2bfca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2bfca8: 0xac40003c
    ctx->pc = 0x2bfca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2bfcac: 0xac400048
    ctx->pc = 0x2bfcacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2bfcb0: 0x3c013f80
    ctx->pc = 0x2bfcb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2bfcb4: 0x44810000
    ctx->pc = 0x2bfcb4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2bfcb8: 0xe440004c
    ctx->pc = 0x2bfcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2bfcbc: 0x3c03302c
    ctx->pc = 0x2bfcbcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)12332 << 16));
    // 0x2bfcc0: 0x34634000
    ctx->pc = 0x2bfcc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16384));
    // 0x2bfcc4: 0xac430044
    ctx->pc = 0x2bfcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x2bfcc8: 0xac400070
    ctx->pc = 0x2bfcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x2bfccc: 0xac400074
    ctx->pc = 0x2bfcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x2bfcd0: 0xac400078
    ctx->pc = 0x2bfcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x2bfcd4: 0xac40007c
    ctx->pc = 0x2bfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x2bfcd8: 0xac440000
    ctx->pc = 0x2bfcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2bfcdc: 0xac440004
    ctx->pc = 0x2bfcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2bfce0: 0xfc450008
    ctx->pc = 0x2bfce0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x2bfce4: 0xfc450060
    ctx->pc = 0x2bfce4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 5));
    // 0x2bfce8: 0xfc450050
    ctx->pc = 0x2bfce8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 5));
    // 0x2bfcec: 0xac400058
    ctx->pc = 0x2bfcecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x2bfcf0: 0xac40005c
    ctx->pc = 0x2bfcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x2bfcf4: 0x3c030037
    ctx->pc = 0x2bfcf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2bfcf8: 0x246325e8
    ctx->pc = 0x2bfcf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 9704));
    // 0x2bfcfc: 0x94640002
    ctx->pc = 0x2bfcfcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2bfd00: 0xac440068
    ctx->pc = 0x2bfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 4));
    // 0x2bfd04: 0x94630002
    ctx->pc = 0x2bfd04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2bfd08: 0x3e00008
    ctx->pc = 0x2BFD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFD0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFD10u;
}
