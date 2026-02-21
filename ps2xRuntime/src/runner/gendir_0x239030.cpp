#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: gendir
// Address: 0x239030 - 0x2391d0
void gendir_0x239030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x239030u;

label_239030:
    // 0x239030: 0xc4830000
    ctx->pc = 0x239030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_239034:
    // 0x239034: 0xc4840008
    ctx->pc = 0x239034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_239038:
    // 0x239038: 0xc4800004
    ctx->pc = 0x239038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23903c:
    // 0x23903c: 0x2cc20008
    ctx->pc = 0x23903cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
label_239040:
    // 0x239040: 0x10400008
label_239044:
    if (ctx->pc == 0x239044u) {
        ctx->pc = 0x239044u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->pc = 0x239048u;
        goto label_239048;
    }
    ctx->pc = 0x239040u;
    {
        const bool branch_taken_0x239040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x239044u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        if (branch_taken_0x239040) {
            ctx->pc = 0x239064u;
            goto label_239064;
        }
    }
    ctx->pc = 0x239048u;
label_239048:
    // 0x239048: 0x3c02003a
    ctx->pc = 0x239048u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_23904c:
    // 0x23904c: 0x24427e40
    ctx->pc = 0x23904cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32320));
label_239050:
    // 0x239050: 0x61880
    ctx->pc = 0x239050u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
label_239054:
    // 0x239054: 0x621821
    ctx->pc = 0x239054u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_239058:
    // 0x239058: 0x8c620000
    ctx->pc = 0x239058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23905c:
    // 0x23905c: 0x400008
label_239060:
    if (ctx->pc == 0x239060u) {
        ctx->pc = 0x239064u;
        goto label_239064;
    }
    ctx->pc = 0x23905Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239064u;
label_239064:
    // 0x239064: 0xe4a30000
    ctx->pc = 0x239064u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_239068:
    // 0x239068: 0x44800000
    ctx->pc = 0x239068u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_23906c:
    // 0x23906c: 0x3e00008
label_239070:
    if (ctx->pc == 0x239070u) {
        ctx->pc = 0x239070u;
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x239074u;
        goto label_239074;
    }
    ctx->pc = 0x23906Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239070u;
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239074u;
label_239074:
    // 0x239074: 0x46001807
    ctx->pc = 0x239074u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_239078:
    // 0x239078: 0xe4a00000
    ctx->pc = 0x239078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_23907c:
    // 0x23907c: 0x46002007
    ctx->pc = 0x23907cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_239080:
    // 0x239080: 0xe4a00008
    ctx->pc = 0x239080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_239084:
    // 0x239084: 0x3c014049
    ctx->pc = 0x239084u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
label_239088:
    // 0x239088: 0x34210fdb
    ctx->pc = 0x239088u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_23908c:
    // 0x23908c: 0x44810000
    ctx->pc = 0x23908cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_239090:
    // 0x239090: 0x3e00008
label_239094:
    if (ctx->pc == 0x239094u) {
        ctx->pc = 0x239098u;
        goto label_239098;
    }
    ctx->pc = 0x239090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239098u;
label_239098:
    // 0x239098: 0x46002007
    ctx->pc = 0x239098u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_23909c:
    // 0x23909c: 0xe4a00000
    ctx->pc = 0x23909cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2390a0:
    // 0x2390a0: 0x3c01bfc9
    ctx->pc = 0x2390a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
label_2390a4:
    // 0x2390a4: 0x34210fdb
    ctx->pc = 0x2390a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_2390a8:
    // 0x2390a8: 0x44810000
    ctx->pc = 0x2390a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2390ac:
    // 0x2390ac: 0x3e00008
label_2390b0:
    if (ctx->pc == 0x2390B0u) {
        ctx->pc = 0x2390B0u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x2390B4u;
        goto label_2390b4;
    }
    ctx->pc = 0x2390ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2390B0u;
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2390B4u;
label_2390b4:
    // 0x2390b4: 0xe4a40000
    ctx->pc = 0x2390b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2390b8:
    // 0x2390b8: 0x46001807
    ctx->pc = 0x2390b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_2390bc:
    // 0x2390bc: 0xe4a00008
    ctx->pc = 0x2390bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2390c0:
    // 0x2390c0: 0x3c013fc9
    ctx->pc = 0x2390c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
label_2390c4:
    // 0x2390c4: 0x34210fdb
    ctx->pc = 0x2390c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_2390c8:
    // 0x2390c8: 0x44810000
    ctx->pc = 0x2390c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2390cc:
    // 0x2390cc: 0x3e00008
label_2390d0:
    if (ctx->pc == 0x2390D0u) {
        ctx->pc = 0x2390D4u;
        goto label_2390d4;
    }
    ctx->pc = 0x2390CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2390D4u;
label_2390d4:
    // 0x2390d4: 0x3c013f34
    ctx->pc = 0x2390d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
label_2390d8:
    // 0x2390d8: 0x3421fdf4
    ctx->pc = 0x2390d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
label_2390dc:
    // 0x2390dc: 0x44810800
    ctx->pc = 0x2390dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2390e0:
    // 0x2390e0: 0x46011802
    ctx->pc = 0x2390e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2390e4:
    // 0x2390e4: 0x46012082
    ctx->pc = 0x2390e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2390e8:
    // 0x2390e8: 0x46020000
    ctx->pc = 0x2390e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2390ec:
    // 0x2390ec: 0xe4a00000
    ctx->pc = 0x2390ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2390f0:
    // 0x2390f0: 0x46001807
    ctx->pc = 0x2390f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_2390f4:
    // 0x2390f4: 0x46010002
    ctx->pc = 0x2390f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2390f8:
    // 0x2390f8: 0x46020000
    ctx->pc = 0x2390f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2390fc:
    // 0x2390fc: 0xe4a00008
    ctx->pc = 0x2390fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_239100:
    // 0x239100: 0x3c013f49
    ctx->pc = 0x239100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16201 << 16));
label_239104:
    // 0x239104: 0x34210fdb
    ctx->pc = 0x239104u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_239108:
    // 0x239108: 0x44810000
    ctx->pc = 0x239108u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23910c:
    // 0x23910c: 0x3e00008
label_239110:
    if (ctx->pc == 0x239110u) {
        ctx->pc = 0x239114u;
        goto label_239114;
    }
    ctx->pc = 0x23910Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239114u;
label_239114:
    // 0x239114: 0x3c013f34
    ctx->pc = 0x239114u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
label_239118:
    // 0x239118: 0x3421fdf4
    ctx->pc = 0x239118u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
label_23911c:
    // 0x23911c: 0x44810000
    ctx->pc = 0x23911cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_239120:
    // 0x239120: 0x46001882
    ctx->pc = 0x239120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_239124:
    // 0x239124: 0x46002047
    ctx->pc = 0x239124u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
label_239128:
    // 0x239128: 0x46000842
    ctx->pc = 0x239128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23912c:
    // 0x23912c: 0x46011040
    ctx->pc = 0x23912cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_239130:
    // 0x239130: 0xe4a10000
    ctx->pc = 0x239130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_239134:
    // 0x239134: 0x46002002
    ctx->pc = 0x239134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_239138:
    // 0x239138: 0x46001080
    ctx->pc = 0x239138u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_23913c:
    // 0x23913c: 0x3c01bf49
    ctx->pc = 0x23913cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48969 << 16));
label_239140:
    // 0x239140: 0x34210fdb
    ctx->pc = 0x239140u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_239144:
    // 0x239144: 0x44810000
    ctx->pc = 0x239144u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_239148:
    // 0x239148: 0x3e00008
label_23914c:
    if (ctx->pc == 0x23914Cu) {
        ctx->pc = 0x23914Cu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x239150u;
        goto label_239150;
    }
    ctx->pc = 0x239148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23914Cu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239150u;
label_239150:
    // 0x239150: 0x46001847
    ctx->pc = 0x239150u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
label_239154:
    // 0x239154: 0x3c013f34
    ctx->pc = 0x239154u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
label_239158:
    // 0x239158: 0x3421fdf4
    ctx->pc = 0x239158u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
label_23915c:
    // 0x23915c: 0x44811000
    ctx->pc = 0x23915cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
label_239160:
    // 0x239160: 0x46020842
    ctx->pc = 0x239160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_239164:
    // 0x239164: 0x46022002
    ctx->pc = 0x239164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_239168:
    // 0x239168: 0x46000800
    ctx->pc = 0x239168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23916c:
    // 0x23916c: 0xe4a00000
    ctx->pc = 0x23916cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_239170:
    // 0x239170: 0x46002007
    ctx->pc = 0x239170u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_239174:
    // 0x239174: 0x46020002
    ctx->pc = 0x239174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_239178:
    // 0x239178: 0x46000840
    ctx->pc = 0x239178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23917c:
    // 0x23917c: 0x3c014016
    ctx->pc = 0x23917cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16406 << 16));
label_239180:
    // 0x239180: 0x3421cbe5
    ctx->pc = 0x239180u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52197));
label_239184:
    // 0x239184: 0x44810000
    ctx->pc = 0x239184u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_239188:
    // 0x239188: 0x3e00008
label_23918c:
    if (ctx->pc == 0x23918Cu) {
        ctx->pc = 0x23918Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x239190u;
        goto label_239190;
    }
    ctx->pc = 0x239188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23918Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239190u;
label_239190:
    // 0x239190: 0x46001807
    ctx->pc = 0x239190u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
label_239194:
    // 0x239194: 0x3c013f34
    ctx->pc = 0x239194u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
label_239198:
    // 0x239198: 0x3421fdf4
    ctx->pc = 0x239198u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
label_23919c:
    // 0x23919c: 0x44810800
    ctx->pc = 0x23919cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2391a0:
    // 0x2391a0: 0x46010002
    ctx->pc = 0x2391a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2391a4:
    // 0x2391a4: 0x46002087
    ctx->pc = 0x2391a4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[4]);
label_2391a8:
    // 0x2391a8: 0x46011082
    ctx->pc = 0x2391a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2391ac:
    // 0x2391ac: 0x46020000
    ctx->pc = 0x2391acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2391b0:
    // 0x2391b0: 0xe4a00000
    ctx->pc = 0x2391b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2391b4:
    // 0x2391b4: 0x46011842
    ctx->pc = 0x2391b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2391b8:
    // 0x2391b8: 0x46020840
    ctx->pc = 0x2391b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2391bc:
    // 0x2391bc: 0x3c01c016
    ctx->pc = 0x2391bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49174 << 16));
label_2391c0:
    // 0x2391c0: 0x3421cbe5
    ctx->pc = 0x2391c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52197));
label_2391c4:
    // 0x2391c4: 0x44810000
    ctx->pc = 0x2391c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2391c8:
    // 0x2391c8: 0x3e00008
label_2391cc:
    if (ctx->pc == 0x2391CCu) {
        ctx->pc = 0x2391CCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = 0x2391D0u;
        goto label_fallthrough_0x2391c8;
    }
    ctx->pc = 0x2391C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2391CCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239030u: goto label_239030;
            case 0x239034u: goto label_239034;
            case 0x239038u: goto label_239038;
            case 0x23903Cu: goto label_23903c;
            case 0x239040u: goto label_239040;
            case 0x239044u: goto label_239044;
            case 0x239048u: goto label_239048;
            case 0x23904Cu: goto label_23904c;
            case 0x239050u: goto label_239050;
            case 0x239054u: goto label_239054;
            case 0x239058u: goto label_239058;
            case 0x23905Cu: goto label_23905c;
            case 0x239060u: goto label_239060;
            case 0x239064u: goto label_239064;
            case 0x239068u: goto label_239068;
            case 0x23906Cu: goto label_23906c;
            case 0x239070u: goto label_239070;
            case 0x239074u: goto label_239074;
            case 0x239078u: goto label_239078;
            case 0x23907Cu: goto label_23907c;
            case 0x239080u: goto label_239080;
            case 0x239084u: goto label_239084;
            case 0x239088u: goto label_239088;
            case 0x23908Cu: goto label_23908c;
            case 0x239090u: goto label_239090;
            case 0x239094u: goto label_239094;
            case 0x239098u: goto label_239098;
            case 0x23909Cu: goto label_23909c;
            case 0x2390A0u: goto label_2390a0;
            case 0x2390A4u: goto label_2390a4;
            case 0x2390A8u: goto label_2390a8;
            case 0x2390ACu: goto label_2390ac;
            case 0x2390B0u: goto label_2390b0;
            case 0x2390B4u: goto label_2390b4;
            case 0x2390B8u: goto label_2390b8;
            case 0x2390BCu: goto label_2390bc;
            case 0x2390C0u: goto label_2390c0;
            case 0x2390C4u: goto label_2390c4;
            case 0x2390C8u: goto label_2390c8;
            case 0x2390CCu: goto label_2390cc;
            case 0x2390D0u: goto label_2390d0;
            case 0x2390D4u: goto label_2390d4;
            case 0x2390D8u: goto label_2390d8;
            case 0x2390DCu: goto label_2390dc;
            case 0x2390E0u: goto label_2390e0;
            case 0x2390E4u: goto label_2390e4;
            case 0x2390E8u: goto label_2390e8;
            case 0x2390ECu: goto label_2390ec;
            case 0x2390F0u: goto label_2390f0;
            case 0x2390F4u: goto label_2390f4;
            case 0x2390F8u: goto label_2390f8;
            case 0x2390FCu: goto label_2390fc;
            case 0x239100u: goto label_239100;
            case 0x239104u: goto label_239104;
            case 0x239108u: goto label_239108;
            case 0x23910Cu: goto label_23910c;
            case 0x239110u: goto label_239110;
            case 0x239114u: goto label_239114;
            case 0x239118u: goto label_239118;
            case 0x23911Cu: goto label_23911c;
            case 0x239120u: goto label_239120;
            case 0x239124u: goto label_239124;
            case 0x239128u: goto label_239128;
            case 0x23912Cu: goto label_23912c;
            case 0x239130u: goto label_239130;
            case 0x239134u: goto label_239134;
            case 0x239138u: goto label_239138;
            case 0x23913Cu: goto label_23913c;
            case 0x239140u: goto label_239140;
            case 0x239144u: goto label_239144;
            case 0x239148u: goto label_239148;
            case 0x23914Cu: goto label_23914c;
            case 0x239150u: goto label_239150;
            case 0x239154u: goto label_239154;
            case 0x239158u: goto label_239158;
            case 0x23915Cu: goto label_23915c;
            case 0x239160u: goto label_239160;
            case 0x239164u: goto label_239164;
            case 0x239168u: goto label_239168;
            case 0x23916Cu: goto label_23916c;
            case 0x239170u: goto label_239170;
            case 0x239174u: goto label_239174;
            case 0x239178u: goto label_239178;
            case 0x23917Cu: goto label_23917c;
            case 0x239180u: goto label_239180;
            case 0x239184u: goto label_239184;
            case 0x239188u: goto label_239188;
            case 0x23918Cu: goto label_23918c;
            case 0x239190u: goto label_239190;
            case 0x239194u: goto label_239194;
            case 0x239198u: goto label_239198;
            case 0x23919Cu: goto label_23919c;
            case 0x2391A0u: goto label_2391a0;
            case 0x2391A4u: goto label_2391a4;
            case 0x2391A8u: goto label_2391a8;
            case 0x2391ACu: goto label_2391ac;
            case 0x2391B0u: goto label_2391b0;
            case 0x2391B4u: goto label_2391b4;
            case 0x2391B8u: goto label_2391b8;
            case 0x2391BCu: goto label_2391bc;
            case 0x2391C0u: goto label_2391c0;
            case 0x2391C4u: goto label_2391c4;
            case 0x2391C8u: goto label_2391c8;
            case 0x2391CCu: goto label_2391cc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2391c8:
    ctx->pc = 0x2391D0u;
}
