#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerSfxInit
// Address: 0x24dc90 - 0x24de2c
void PlayerSfxInit_0x24dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24dc90u;

    // 0x24dc90: 0x27bdffa0
    ctx->pc = 0x24dc90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24dc94: 0xffbf0050
    ctx->pc = 0x24dc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24dc98: 0xffb40040
    ctx->pc = 0x24dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24dc9c: 0xffb30030
    ctx->pc = 0x24dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24dca0: 0xffb20020
    ctx->pc = 0x24dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24dca4: 0xffb10010
    ctx->pc = 0x24dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24dca8: 0xffb00000
    ctx->pc = 0x24dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24dcac: 0x80a02d
    ctx->pc = 0x24dcacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dcb0: 0xa0902d
    ctx->pc = 0x24dcb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dcb4: 0x8e430008
    ctx->pc = 0x24dcb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x24dcb8: 0x2402ffff
    ctx->pc = 0x24dcb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24dcbc: 0x1462002d
    ctx->pc = 0x24DCBCu;
    {
        const bool branch_taken_0x24dcbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24DCC0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24dcbc) {
            ctx->pc = 0x24DD74u;
            goto label_24dd74;
        }
    }
    ctx->pc = 0x24DCC4u;
    // 0x24dcc4: 0x8e420000
    ctx->pc = 0x24dcc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24dcc8: 0x3c030f00
    ctx->pc = 0x24dcc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3840 << 16));
    // 0x24dccc: 0x34630100
    ctx->pc = 0x24dcccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 256));
    // 0x24dcd0: 0x431024
    ctx->pc = 0x24dcd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24dcd4: 0x10400022
    ctx->pc = 0x24DCD4u;
    {
        const bool branch_taken_0x24dcd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DCD8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
        if (branch_taken_0x24dcd4) {
            ctx->pc = 0x24DD60u;
            goto label_24dd60;
        }
    }
    ctx->pc = 0x24DCDCu;
    // 0x24dcdc: 0x2610c7d8
    ctx->pc = 0x24dcdcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294952920));
    // 0x24dce0: 0x8e820000
    ctx->pc = 0x24dce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24dce4: 0x2411004c
    ctx->pc = 0x24dce4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 76));
    // 0x24dce8: 0x511018
    ctx->pc = 0x24dce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24dcec: 0x2021021
    ctx->pc = 0x24dcecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24dcf0: 0x8c470010
    ctx->pc = 0x24dcf0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24dcf4: 0x26530010
    ctx->pc = 0x24dcf4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 18), 16));
    // 0x24dcf8: 0x260202d
    ctx->pc = 0x24dcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dcfc: 0x282d
    ctx->pc = 0x24dcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd00: 0xe0302d
    ctx->pc = 0x24dd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd04: 0xc0b1b56
    ctx->pc = 0x24DD04u;
    SET_GPR_U32(ctx, 31, 0x24DD0Cu);
    ctx->pc = 0x24DD08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD0Cu; }
    }
    if (ctx->pc != 0x24DD0Cu) { return; }
    ctx->pc = 0x24DD0Cu;
    // 0x24dd0c: 0xae420008
    ctx->pc = 0x24dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x24dd10: 0x8e830000
    ctx->pc = 0x24dd10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24dd14: 0x712018
    ctx->pc = 0x24dd14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24dd18: 0x901821
    ctx->pc = 0x24dd18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x24dd1c: 0x14400015
    ctx->pc = 0x24DD1Cu;
    {
        const bool branch_taken_0x24dd1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24DD20u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 52)));
        if (branch_taken_0x24dd1c) {
            ctx->pc = 0x24DD74u;
            goto label_24dd74;
        }
    }
    ctx->pc = 0x24DD24u;
    // 0x24dd24: 0x260202d
    ctx->pc = 0x24dd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd28: 0x282d
    ctx->pc = 0x24dd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd2c: 0xe0302d
    ctx->pc = 0x24dd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd30: 0xc0b1b56
    ctx->pc = 0x24DD30u;
    SET_GPR_U32(ctx, 31, 0x24DD38u);
    ctx->pc = 0x24DD34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD38u; }
    }
    if (ctx->pc != 0x24DD38u) { return; }
    ctx->pc = 0x24DD38u;
    // 0x24dd38: 0x1440000e
    ctx->pc = 0x24DD38u;
    {
        const bool branch_taken_0x24dd38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24DD3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x24dd38) {
            ctx->pc = 0x24DD74u;
            goto label_24dd74;
        }
    }
    ctx->pc = 0x24DD40u;
    // 0x24dd40: 0x260202d
    ctx->pc = 0x24dd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd44: 0x282d
    ctx->pc = 0x24dd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd48: 0x2406ffff
    ctx->pc = 0x24dd48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24dd4c: 0x2407ffff
    ctx->pc = 0x24dd4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24dd50: 0xc0b1b56
    ctx->pc = 0x24DD50u;
    SET_GPR_U32(ctx, 31, 0x24DD58u);
    ctx->pc = 0x24DD54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD58u; }
    }
    if (ctx->pc != 0x24DD58u) { return; }
    ctx->pc = 0x24DD58u;
    // 0x24dd58: 0x10000006
    ctx->pc = 0x24DD58u;
    {
        const bool branch_taken_0x24dd58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DD5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x24dd58) {
            ctx->pc = 0x24DD74u;
            goto label_24dd74;
        }
    }
    ctx->pc = 0x24DD60u;
label_24dd60:
    // 0x24dd60: 0x26450010
    ctx->pc = 0x24dd60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 18), 16));
    // 0x24dd64: 0x86460030
    ctx->pc = 0x24dd64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x24dd68: 0xc09e6d2
    ctx->pc = 0x24DD68u;
    SET_GPR_U32(ctx, 31, 0x24DD70u);
    ctx->pc = 0x24DD6Cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DD70u; }
    }
    if (ctx->pc != 0x24DD70u) { return; }
    ctx->pc = 0x24DD70u;
    // 0x24dd70: 0xae420008
    ctx->pc = 0x24dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_24dd74:
    // 0x24dd74: 0x8e43000c
    ctx->pc = 0x24dd74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x24dd78: 0x2402ffff
    ctx->pc = 0x24dd78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24dd7c: 0x14620024
    ctx->pc = 0x24DD7Cu;
    {
        const bool branch_taken_0x24dd7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24DD80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x24dd7c) {
            ctx->pc = 0x24DE10u;
            goto label_24de10;
        }
    }
    ctx->pc = 0x24DD84u;
    // 0x24dd84: 0x8e420000
    ctx->pc = 0x24dd84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24dd88: 0x3c030f00
    ctx->pc = 0x24dd88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3840 << 16));
    // 0x24dd8c: 0x431024
    ctx->pc = 0x24dd8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24dd90: 0x10400015
    ctx->pc = 0x24DD90u;
    {
        const bool branch_taken_0x24dd90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DD94u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        if (branch_taken_0x24dd90) {
            ctx->pc = 0x24DDE8u;
            goto label_24dde8;
        }
    }
    ctx->pc = 0x24DD98u;
    // 0x24dd98: 0x1040001a
    ctx->pc = 0x24DD98u;
    {
        const bool branch_taken_0x24dd98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DD9Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x24dd98) {
            ctx->pc = 0x24DE04u;
            goto label_24de04;
        }
    }
    ctx->pc = 0x24DDA0u;
    // 0x24dda0: 0x26041ec0
    ctx->pc = 0x24dda0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7872));
    // 0x24dda4: 0x3c05003b
    ctx->pc = 0x24dda4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x24dda8: 0x24a58400
    ctx->pc = 0x24dda8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294935552));
    // 0x24ddac: 0x26860698
    ctx->pc = 0x24ddacu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 1688));
    // 0x24ddb0: 0xc0b6252
    ctx->pc = 0x24DDB0u;
    SET_GPR_U32(ctx, 31, 0x24DDB8u);
    ctx->pc = 0x24DDB4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DDB8u; }
    }
    if (ctx->pc != 0x24DDB8u) { return; }
    ctx->pc = 0x24DDB8u;
    // 0x24ddb8: 0x26041ec0
    ctx->pc = 0x24ddb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 7872));
    // 0x24ddbc: 0x8e8507cc
    ctx->pc = 0x24ddbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 1996)));
    // 0x24ddc0: 0xa0302d
    ctx->pc = 0x24ddc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ddc4: 0xc0b19fe
    ctx->pc = 0x24DDC4u;
    SET_GPR_U32(ctx, 31, 0x24DDCCu);
    ctx->pc = 0x24DDC8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DDCCu; }
    }
    if (ctx->pc != 0x24DDCCu) { return; }
    ctx->pc = 0x24DDCCu;
    // 0x24ddcc: 0x8e840090
    ctx->pc = 0x24ddccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x24ddd0: 0xc084982
    ctx->pc = 0x24DDD0u;
    SET_GPR_U32(ctx, 31, 0x24DDD8u);
    ctx->pc = 0x24DDD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212608u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindMbidxNode_0x212608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DDD8u; }
    }
    if (ctx->pc != 0x24DDD8u) { return; }
    ctx->pc = 0x24DDD8u;
    // 0x24ddd8: 0x5040000b
    ctx->pc = 0x24DDD8u;
    {
        const bool branch_taken_0x24ddd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24ddd8) {
            ctx->pc = 0x24DDDCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x24DE08u;
            goto label_24de08;
        }
    }
    ctx->pc = 0x24DDE0u;
    // 0x24dde0: 0x10000009
    ctx->pc = 0x24DDE0u;
    {
        const bool branch_taken_0x24dde0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DDE4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x24dde0) {
            ctx->pc = 0x24DE08u;
            goto label_24de08;
        }
    }
    ctx->pc = 0x24DDE8u;
label_24dde8:
    // 0x24dde8: 0x10400006
    ctx->pc = 0x24DDE8u;
    {
        const bool branch_taken_0x24dde8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DDECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 32));
        if (branch_taken_0x24dde8) {
            ctx->pc = 0x24DE04u;
            goto label_24de04;
        }
    }
    ctx->pc = 0x24DDF0u;
    // 0x24ddf0: 0x282d
    ctx->pc = 0x24ddf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ddf4: 0xc088108
    ctx->pc = 0x24DDF4u;
    SET_GPR_U32(ctx, 31, 0x24DDFCu);
    ctx->pc = 0x24DDF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220420u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioFindSound_0x220420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DDFCu; }
    }
    if (ctx->pc != 0x24DDFCu) { return; }
    ctx->pc = 0x24DDFCu;
    // 0x24ddfc: 0x10000003
    ctx->pc = 0x24DDFCu;
    {
        const bool branch_taken_0x24ddfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24DE00u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x24ddfc) {
            ctx->pc = 0x24DE0Cu;
            goto label_24de0c;
        }
    }
    ctx->pc = 0x24DE04u;
label_24de04:
    // 0x24de04: 0x2402ffff
    ctx->pc = 0x24de04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_24de08:
    // 0x24de08: 0xae42000c
    ctx->pc = 0x24de08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_24de0c:
    // 0x24de0c: 0xdfbf0050
    ctx->pc = 0x24de0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24de10:
    // 0x24de10: 0xdfb40040
    ctx->pc = 0x24de10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24de14: 0xdfb30030
    ctx->pc = 0x24de14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24de18: 0xdfb20020
    ctx->pc = 0x24de18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24de1c: 0xdfb10010
    ctx->pc = 0x24de1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24de20: 0xdfb00000
    ctx->pc = 0x24de20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24de24: 0x3e00008
    ctx->pc = 0x24DE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DE28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DD60u: goto label_24dd60;
            case 0x24DD74u: goto label_24dd74;
            case 0x24DDE8u: goto label_24dde8;
            case 0x24DE04u: goto label_24de04;
            case 0x24DE08u: goto label_24de08;
            case 0x24DE0Cu: goto label_24de0c;
            case 0x24DE10u: goto label_24de10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24DE2Cu;
}
