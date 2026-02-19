#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterAnimate
// Address: 0x2958d8 - 0x295b7c
void CritterAnimate_0x2958d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2958d8u;

    // 0x2958d8: 0x27bdff80
    ctx->pc = 0x2958d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2958dc: 0xffbf0070
    ctx->pc = 0x2958dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2958e0: 0xffb60060
    ctx->pc = 0x2958e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2958e4: 0xffb50050
    ctx->pc = 0x2958e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2958e8: 0xffb40040
    ctx->pc = 0x2958e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2958ec: 0xffb30030
    ctx->pc = 0x2958ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2958f0: 0xffb20020
    ctx->pc = 0x2958f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2958f4: 0xffb10010
    ctx->pc = 0x2958f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2958f8: 0xffb00000
    ctx->pc = 0x2958f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2958fc: 0x80902d
    ctx->pc = 0x2958fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295900: 0x802d
    ctx->pc = 0x295900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295904: 0xa82d
    ctx->pc = 0x295904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295908: 0xc0a55a8
    ctx->pc = 0x295908u;
    SET_GPR_U32(ctx, 31, 0x295910u);
    ctx->pc = 0x29590Cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 292)));
    ctx->pc = 0x2956A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetDmove_0x2956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295910u; }
    }
    if (ctx->pc != 0x295910u) { return; }
    ctx->pc = 0x295910u;
    // 0x295910: 0x6600006
    ctx->pc = 0x295910u;
    {
        const bool branch_taken_0x295910 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x295914u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295910) {
            ctx->pc = 0x29592Cu;
            goto label_29592c;
        }
    }
    ctx->pc = 0x295918u;
    // 0x295918: 0x8e430004
    ctx->pc = 0x295918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x29591c: 0x24020090
    ctx->pc = 0x29591cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x295920: 0x2621018
    ctx->pc = 0x295920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x295924: 0x8c630124
    ctx->pc = 0x295924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x295928: 0x438021
    ctx->pc = 0x295928u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29592c:
    // 0x29592c: 0x6c00005
    ctx->pc = 0x29592Cu;
    {
        const bool branch_taken_0x29592c = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x295930u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
        if (branch_taken_0x29592c) {
            ctx->pc = 0x295944u;
            goto label_295944;
        }
    }
    ctx->pc = 0x295934u;
    // 0x295934: 0x8e430004
    ctx->pc = 0x295934u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x295938: 0x2c21018
    ctx->pc = 0x295938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29593c: 0x8c630124
    ctx->pc = 0x29593cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x295940: 0x43a821
    ctx->pc = 0x295940u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_295944:
    // 0x295944: 0x16a00004
    ctx->pc = 0x295944u;
    {
        const bool branch_taken_0x295944 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x295948u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x295944) {
            ctx->pc = 0x295958u;
            goto label_295958;
        }
    }
    ctx->pc = 0x29594Cu;
    // 0x29594c: 0x8611000c
    ctx->pc = 0x29594cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x295950: 0x10000036
    ctx->pc = 0x295950u;
    {
        const bool branch_taken_0x295950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295954u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295950) {
            ctx->pc = 0x295A2Cu;
            goto label_295a2c;
        }
    }
    ctx->pc = 0x295958u;
label_295958:
    // 0x295958: 0xdc420e28
    ctx->pc = 0x295958u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x29595c: 0x30420080
    ctx->pc = 0x29595cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x295960: 0x1440000e
    ctx->pc = 0x295960u;
    {
        const bool branch_taken_0x295960 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x295964u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x295960) {
            ctx->pc = 0x29599Cu;
            goto label_29599c;
        }
    }
    ctx->pc = 0x295968u;
    // 0x295968: 0x52b0000d
    ctx->pc = 0x295968u;
    {
        const bool branch_taken_0x295968 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 16));
        if (branch_taken_0x295968) {
            ctx->pc = 0x29596Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2959A0u;
            goto label_2959a0;
        }
    }
    ctx->pc = 0x295970u;
    // 0x295970: 0x8ea20008
    ctx->pc = 0x295970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x295974: 0x28420f00
    ctx->pc = 0x295974u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3840));
    // 0x295978: 0x14400008
    ctx->pc = 0x295978u;
    {
        const bool branch_taken_0x295978 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29597Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x295978) {
            ctx->pc = 0x29599Cu;
            goto label_29599c;
        }
    }
    ctx->pc = 0x295980u;
    // 0x295980: 0x52000029
    ctx->pc = 0x295980u;
    {
        const bool branch_taken_0x295980 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x295980) {
            ctx->pc = 0x295984u;
            SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->pc = 0x295A28u;
            goto label_295a28;
        }
    }
    ctx->pc = 0x295988u;
    // 0x295988: 0x86020056
    ctx->pc = 0x295988u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x29598c: 0x10400003
    ctx->pc = 0x29598Cu;
    {
        const bool branch_taken_0x29598c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295990u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29598c) {
            ctx->pc = 0x29599Cu;
            goto label_29599c;
        }
    }
    ctx->pc = 0x295994u;
    // 0x295994: 0x10000024
    ctx->pc = 0x295994u;
    {
        const bool branch_taken_0x295994 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295998u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
        if (branch_taken_0x295994) {
            ctx->pc = 0x295A28u;
            goto label_295a28;
        }
    }
    ctx->pc = 0x29599Cu;
label_29599c:
    // 0x29599c: 0xc6410258
    ctx->pc = 0x29599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2959a0:
    // 0x2959a0: 0xc440ffa4
    ctx->pc = 0x2959a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2959a4: 0x46010034
    ctx->pc = 0x2959a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2959a8: 0x0
    ctx->pc = 0x2959a8u;
    // NOP
    // 0x2959ac: 0x45020007
    ctx->pc = 0x2959ACu;
    {
        const bool branch_taken_0x2959ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2959ac) {
            ctx->pc = 0x2959B0u;
            SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
            ctx->pc = 0x2959CCu;
            goto label_2959cc;
        }
    }
    ctx->pc = 0x2959B4u;
    // 0x2959b4: 0x12000002
    ctx->pc = 0x2959B4u;
    {
        const bool branch_taken_0x2959b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2959B8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2959b4) {
            ctx->pc = 0x2959C0u;
            goto label_2959c0;
        }
    }
    ctx->pc = 0x2959BCu;
    // 0x2959bc: 0x8611000c
    ctx->pc = 0x2959bcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2959c0:
    // 0x2959c0: 0x260b02d
    ctx->pc = 0x2959c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2959c4: 0x10000019
    ctx->pc = 0x2959C4u;
    {
        const bool branch_taken_0x2959c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2959C8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2959c4) {
            ctx->pc = 0x295A2Cu;
            goto label_295a2c;
        }
    }
    ctx->pc = 0x2959CCu;
label_2959cc:
    // 0x2959cc: 0xdc420e28
    ctx->pc = 0x2959ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2959d0: 0x30420080
    ctx->pc = 0x2959d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x2959d4: 0x1040000d
    ctx->pc = 0x2959D4u;
    {
        const bool branch_taken_0x2959d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2959d4) {
            ctx->pc = 0x295A0Cu;
            goto label_295a0c;
        }
    }
    ctx->pc = 0x2959DCu;
    // 0x2959dc: 0x12a00002
    ctx->pc = 0x2959DCu;
    {
        const bool branch_taken_0x2959dc = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x2959E0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2959dc) {
            ctx->pc = 0x2959E8u;
            goto label_2959e8;
        }
    }
    ctx->pc = 0x2959E4u;
    // 0x2959e4: 0x86b1000c
    ctx->pc = 0x2959e4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
label_2959e8:
    // 0x2959e8: 0x12000010
    ctx->pc = 0x2959E8u;
    {
        const bool branch_taken_0x2959e8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2959ECu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2959e8) {
            ctx->pc = 0x295A2Cu;
            goto label_295a2c;
        }
    }
    ctx->pc = 0x2959F0u;
    // 0x2959f0: 0x1215000e
    ctx->pc = 0x2959F0u;
    {
        const bool branch_taken_0x2959f0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 21));
        ctx->pc = 0x2959F4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2959f0) {
            ctx->pc = 0x295A2Cu;
            goto label_295a2c;
        }
    }
    ctx->pc = 0x2959F8u;
    // 0x2959f8: 0x8e020000
    ctx->pc = 0x2959f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2959fc: 0x24030003
    ctx->pc = 0x2959fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x295a00: 0x38420001
    ctx->pc = 0x295a00u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x295a04: 0x10000009
    ctx->pc = 0x295A04u;
    {
        const bool branch_taken_0x295a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295A08u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
        if (branch_taken_0x295a04) {
            ctx->pc = 0x295A2Cu;
            goto label_295a2c;
        }
    }
    ctx->pc = 0x295A0Cu;
label_295a0c:
    // 0x295a0c: 0x12000006
    ctx->pc = 0x295A0Cu;
    {
        const bool branch_taken_0x295a0c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x295A10u;
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
        if (branch_taken_0x295a0c) {
            ctx->pc = 0x295A28u;
            goto label_295a28;
        }
    }
    ctx->pc = 0x295A14u;
    // 0x295a14: 0x200202d
    ctx->pc = 0x295a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295a18: 0xc0a5574
    ctx->pc = 0x295A18u;
    SET_GPR_U32(ctx, 31, 0x295A20u);
    ctx->pc = 0x295A1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2955D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterAnimInterrupt_0x2955d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A20u; }
    }
    if (ctx->pc != 0x295A20u) { return; }
    ctx->pc = 0x295A20u;
    // 0x295a20: 0x10000002
    ctx->pc = 0x295A20u;
    {
        const bool branch_taken_0x295a20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295A24u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295a20) {
            ctx->pc = 0x295A2Cu;
            goto label_295a2c;
        }
    }
    ctx->pc = 0x295A28u;
label_295a28:
    // 0x295a28: 0x24140003
    ctx->pc = 0x295a28u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
label_295a2c:
    // 0x295a2c: 0x6210004
    ctx->pc = 0x295A2Cu;
    {
        const bool branch_taken_0x295a2c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x295A30u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x295a2c) {
            ctx->pc = 0x295A40u;
            goto label_295a40;
        }
    }
    ctx->pc = 0x295A34u;
    // 0x295a34: 0x2484e2d0
    ctx->pc = 0x295a34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959824));
    // 0x295a38: 0xc0b49a6
    ctx->pc = 0x295A38u;
    SET_GPR_U32(ctx, 31, 0x295A40u);
    ctx->pc = 0x295A3Cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A40u; }
    }
    if (ctx->pc != 0x295A40u) { return; }
    ctx->pc = 0x295A40u;
label_295a40:
    // 0x295a40: 0x5215000e
    ctx->pc = 0x295A40u;
    {
        const bool branch_taken_0x295a40 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 21));
        if (branch_taken_0x295a40) {
            ctx->pc = 0x295A44u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2892)));
            ctx->pc = 0x295A7Cu;
            goto label_295a7c;
        }
    }
    ctx->pc = 0x295A48u;
    // 0x295a48: 0x5680000c
    ctx->pc = 0x295A48u;
    {
        const bool branch_taken_0x295a48 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x295a48) {
            ctx->pc = 0x295A4Cu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2892)));
            ctx->pc = 0x295A7Cu;
            goto label_295a7c;
        }
    }
    ctx->pc = 0x295A50u;
    // 0x295a50: 0x3c020031
    ctx->pc = 0x295a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x295a54: 0xc441ffa4
    ctx->pc = 0x295a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295a58: 0xc6400258
    ctx->pc = 0x295a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295a5c: 0x46010034
    ctx->pc = 0x295a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295a60: 0x0
    ctx->pc = 0x295a60u;
    // NOP
    // 0x295a64: 0x45020005
    ctx->pc = 0x295A64u;
    {
        const bool branch_taken_0x295a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295a64) {
            ctx->pc = 0x295A68u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2892)));
            ctx->pc = 0x295A7Cu;
            goto label_295a7c;
        }
    }
    ctx->pc = 0x295A6Cu;
    // 0x295a6c: 0xc0841b8
    ctx->pc = 0x295A6Cu;
    SET_GPR_U32(ctx, 31, 0x295A74u);
    ctx->pc = 0x295A70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 132));
    ctx->pc = 0x2106E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimDone_0x2106e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295A74u; }
    }
    if (ctx->pc != 0x295A74u) { return; }
    ctx->pc = 0x295A74u;
    // 0x295a74: 0x2a02b
    ctx->pc = 0x295a74u;
    SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x295a78: 0x86420b4c
    ctx->pc = 0x295a78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2892)));
label_295a7c:
    // 0x295a7c: 0x18400007
    ctx->pc = 0x295A7Cu;
    {
        const bool branch_taken_0x295a7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x295A80u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295a7c) {
            ctx->pc = 0x295A9Cu;
            goto label_295a9c;
        }
    }
    ctx->pc = 0x295A84u;
    // 0x295a84: 0x3c020031
    ctx->pc = 0x295a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x295a88: 0xc64000a4
    ctx->pc = 0x295a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x295a8c: 0xc441ffa8
    ctx->pc = 0x295a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x295a90: 0x46010000
    ctx->pc = 0x295a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x295a94: 0x10000006
    ctx->pc = 0x295A94u;
    {
        const bool branch_taken_0x295a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295A98u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
        if (branch_taken_0x295a94) {
            ctx->pc = 0x295AB0u;
            goto label_295ab0;
        }
    }
    ctx->pc = 0x295A9Cu;
label_295a9c:
    // 0x295a9c: 0x26440080
    ctx->pc = 0x295a9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 128));
    // 0x295aa0: 0x220282d
    ctx->pc = 0x295aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295aa4: 0xc084a96
    ctx->pc = 0x295AA4u;
    SET_GPR_U32(ctx, 31, 0x295AACu);
    ctx->pc = 0x295AA8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AACu; }
    }
    if (ctx->pc != 0x295AACu) { return; }
    ctx->pc = 0x295AACu;
    // 0x295aac: 0x40982d
    ctx->pc = 0x295aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295ab0:
    // 0x295ab0: 0x52000006
    ctx->pc = 0x295AB0u;
    {
        const bool branch_taken_0x295ab0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x295ab0) {
            ctx->pc = 0x295AB4u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 200)));
            ctx->pc = 0x295ACCu;
            goto label_295acc;
        }
    }
    ctx->pc = 0x295AB8u;
    // 0x295ab8: 0x56150004
    ctx->pc = 0x295AB8u;
    {
        const bool branch_taken_0x295ab8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 21));
        if (branch_taken_0x295ab8) {
            ctx->pc = 0x295ABCu;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 200)));
            ctx->pc = 0x295ACCu;
            goto label_295acc;
        }
    }
    ctx->pc = 0x295AC0u;
    // 0x295ac0: 0x8e020000
    ctx->pc = 0x295ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x295ac4: 0x2980a
    ctx->pc = 0x295ac4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
    // 0x295ac8: 0x8e5000c8
    ctx->pc = 0x295ac8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_295acc:
    // 0x295acc: 0x5200000c
    ctx->pc = 0x295ACCu;
    {
        const bool branch_taken_0x295acc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x295acc) {
            ctx->pc = 0x295AD0u;
            SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), 3));
            ctx->pc = 0x295B00u;
            goto label_295b00;
        }
    }
    ctx->pc = 0x295AD4u;
    // 0x295ad4: 0x86020010
    ctx->pc = 0x295ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_295ad8:
    // 0x295ad8: 0x222102a
    ctx->pc = 0x295ad8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x295adc: 0x2880a
    ctx->pc = 0x295adcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    // 0x295ae0: 0x200202d
    ctx->pc = 0x295ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ae4: 0x220282d
    ctx->pc = 0x295ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ae8: 0xc084a96
    ctx->pc = 0x295AE8u;
    SET_GPR_U32(ctx, 31, 0x295AF0u);
    ctx->pc = 0x295AECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295AF0u; }
    }
    if (ctx->pc != 0x295AF0u) { return; }
    ctx->pc = 0x295AF0u;
    // 0x295af0: 0x8e100050
    ctx->pc = 0x295af0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x295af4: 0x5600fff8
    ctx->pc = 0x295AF4u;
    {
        const bool branch_taken_0x295af4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x295af4) {
            ctx->pc = 0x295AF8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x295AD8u;
            goto label_295ad8;
        }
    }
    ctx->pc = 0x295AFCu;
    // 0x295afc: 0x32730003
    ctx->pc = 0x295afcu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 19), 3));
label_295b00:
    // 0x295b00: 0x1260000d
    ctx->pc = 0x295B00u;
    {
        const bool branch_taken_0x295b00 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x295B04u;
        WRITE16(ADD32(GPR_U32(ctx, 18), 302), (uint16_t)GPR_U32(ctx, 19));
        if (branch_taken_0x295b00) {
            ctx->pc = 0x295B38u;
            goto label_295b38;
        }
    }
    ctx->pc = 0x295B08u;
    // 0x295b08: 0x240202d
    ctx->pc = 0x295b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b0c: 0x2c0282d
    ctx->pc = 0x295b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b10: 0xdfbf0070
    ctx->pc = 0x295b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295b14: 0xdfb60060
    ctx->pc = 0x295b14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295b18: 0xdfb50050
    ctx->pc = 0x295b18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295b1c: 0xdfb40040
    ctx->pc = 0x295b1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295b20: 0xdfb30030
    ctx->pc = 0x295b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295b24: 0xdfb20020
    ctx->pc = 0x295b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295b28: 0xdfb10010
    ctx->pc = 0x295b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295b2c: 0xdfb00000
    ctx->pc = 0x295b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295b30: 0x80a55be
    ctx->pc = 0x295B30u;
    ctx->pc = 0x295B34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x2956F8u;
    CritterMoveDone_0x2956f8(rdram, ctx, runtime); return;
    ctx->pc = 0x295B38u;
label_295b38:
    // 0x295b38: 0x6c10007
    ctx->pc = 0x295B38u;
    {
        const bool branch_taken_0x295b38 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x295B3Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x295b38) {
            ctx->pc = 0x295B58u;
            goto label_295b58;
        }
    }
    ctx->pc = 0x295B40u;
    // 0x295b40: 0xc0841b8
    ctx->pc = 0x295B40u;
    SET_GPR_U32(ctx, 31, 0x295B48u);
    ctx->pc = 0x295B44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 132));
    ctx->pc = 0x2106E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimDone_0x2106e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B48u; }
    }
    if (ctx->pc != 0x295B48u) { return; }
    ctx->pc = 0x295B48u;
    // 0x295b48: 0x10400002
    ctx->pc = 0x295B48u;
    {
        const bool branch_taken_0x295b48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295B4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x295b48) {
            ctx->pc = 0x295B54u;
            goto label_295b54;
        }
    }
    ctx->pc = 0x295B50u;
    // 0x295b50: 0xa6420124
    ctx->pc = 0x295b50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 292), (uint16_t)GPR_U32(ctx, 2));
label_295b54:
    // 0x295b54: 0xdfbf0070
    ctx->pc = 0x295b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_295b58:
    // 0x295b58: 0xdfb60060
    ctx->pc = 0x295b58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295b5c: 0xdfb50050
    ctx->pc = 0x295b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x295b60: 0xdfb40040
    ctx->pc = 0x295b60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295b64: 0xdfb30030
    ctx->pc = 0x295b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295b68: 0xdfb20020
    ctx->pc = 0x295b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295b6c: 0xdfb10010
    ctx->pc = 0x295b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295b70: 0xdfb00000
    ctx->pc = 0x295b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295b74: 0x3e00008
    ctx->pc = 0x295B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295B78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29592Cu: goto label_29592c;
            case 0x295944u: goto label_295944;
            case 0x295958u: goto label_295958;
            case 0x29599Cu: goto label_29599c;
            case 0x2959A0u: goto label_2959a0;
            case 0x2959C0u: goto label_2959c0;
            case 0x2959CCu: goto label_2959cc;
            case 0x2959E8u: goto label_2959e8;
            case 0x295A0Cu: goto label_295a0c;
            case 0x295A28u: goto label_295a28;
            case 0x295A2Cu: goto label_295a2c;
            case 0x295A40u: goto label_295a40;
            case 0x295A7Cu: goto label_295a7c;
            case 0x295A9Cu: goto label_295a9c;
            case 0x295AB0u: goto label_295ab0;
            case 0x295ACCu: goto label_295acc;
            case 0x295AD8u: goto label_295ad8;
            case 0x295B00u: goto label_295b00;
            case 0x295B38u: goto label_295b38;
            case 0x295B54u: goto label_295b54;
            case 0x295B58u: goto label_295b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x295B7Cu;
}
