#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setFrm__7CFcurveFf
// Address: 0x1e6ff0 - 0x1e7318
void setFrm__7CFcurveFf_0x1e6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setFrm__7CFcurveFf");


    ctx->pc = 0x1e6ff0u;

    // 0x1e6ff0: 0x44800000
    ctx->pc = 0x1e6ff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1e6ff4: 0x0
    ctx->pc = 0x1e6ff4u;
    // NOP
    // 0x1e6ff8: 0x46006034
    ctx->pc = 0x1e6ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6ffc: 0x0
    ctx->pc = 0x1e6ffcu;
    // NOP
    // 0x1e7000: 0x45000002
    ctx->pc = 0x1E7000u;
    {
        const bool branch_taken_0x1e7000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7004u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        if (branch_taken_0x1e7000) {
            ctx->pc = 0x1E700Cu;
            goto label_1e700c;
        }
    }
    ctx->pc = 0x1E7008u;
    // 0x1e7008: 0xe480000c
    ctx->pc = 0x1e7008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1e700c:
    // 0x1e700c: 0x8c870000
    ctx->pc = 0x1e700cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e7010: 0x10e0003f
    ctx->pc = 0x1E7010u;
    {
        const bool branch_taken_0x1e7010 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7010) {
            ctx->pc = 0x1E7110u;
            goto label_1e7110;
        }
    }
    ctx->pc = 0x1E7018u;
    // 0x1e7018: 0x84860016
    ctx->pc = 0x1e7018u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1e701c: 0x84830010
    ctx->pc = 0x1e701cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e7020: 0x24c50001
    ctx->pc = 0x1e7020u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7024: 0x10a3001e
    ctx->pc = 0x1E7024u;
    {
        const bool branch_taken_0x1e7024 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E7028u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e7024) {
            ctx->pc = 0x1E70A0u;
            goto label_1e70a0;
        }
    }
    ctx->pc = 0x1E702Cu;
    // 0x1e702c: 0x661821
    ctx->pc = 0x1e702cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7030: 0x31880
    ctx->pc = 0x1e7030u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7034: 0x671821
    ctx->pc = 0x1e7034u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e7038: 0xc4610014
    ctx->pc = 0x1e7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e703c: 0xc480000c
    ctx->pc = 0x1e703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7040: 0x46010034
    ctx->pc = 0x1e7040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7044: 0x0
    ctx->pc = 0x1e7044u;
    // NOP
    // 0x1e7048: 0x45010015
    ctx->pc = 0x1E7048u;
    {
        const bool branch_taken_0x1e7048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7048) {
            ctx->pc = 0x1E70A0u;
            goto label_1e70a0;
        }
    }
    ctx->pc = 0x1E7050u;
label_1e7050:
    // 0x1e7050: 0x84830016
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1e7054: 0x24630001
    ctx->pc = 0x1e7054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e7058: 0xa4830016
    ctx->pc = 0x1e7058u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e705c: 0x84860016
    ctx->pc = 0x1e705cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1e7060: 0x84830010
    ctx->pc = 0x1e7060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e7064: 0x24c50001
    ctx->pc = 0x1e7064u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7068: 0x10a30029
    ctx->pc = 0x1E7068u;
    {
        const bool branch_taken_0x1e7068 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E706Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e7068) {
            ctx->pc = 0x1E7110u;
            goto label_1e7110;
        }
    }
    ctx->pc = 0x1E7070u;
    // 0x1e7070: 0x661821
    ctx->pc = 0x1e7070u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7074: 0x32880
    ctx->pc = 0x1e7074u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7078: 0x8c830000
    ctx->pc = 0x1e7078u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e707c: 0xc480000c
    ctx->pc = 0x1e707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7080: 0x651821
    ctx->pc = 0x1e7080u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7084: 0xc4610014
    ctx->pc = 0x1e7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7088: 0x46010034
    ctx->pc = 0x1e7088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e708c: 0x0
    ctx->pc = 0x1e708cu;
    // NOP
    // 0x1e7090: 0x4500ffef
    ctx->pc = 0x1E7090u;
    {
        const bool branch_taken_0x1e7090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7090) {
            ctx->pc = 0x1E7050u;
            goto label_1e7050;
        }
    }
    ctx->pc = 0x1E7098u;
    // 0x1e7098: 0x1000001e
    ctx->pc = 0x1E7098u;
    {
        const bool branch_taken_0x1e7098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E709Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        if (branch_taken_0x1e7098) {
            ctx->pc = 0x1E7114u;
            goto label_1e7114;
        }
    }
    ctx->pc = 0x1E70A0u;
label_1e70a0:
    // 0x1e70a0: 0x18c0001b
    ctx->pc = 0x1E70A0u;
    {
        const bool branch_taken_0x1e70a0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1E70A4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e70a0) {
            ctx->pc = 0x1E7110u;
            goto label_1e7110;
        }
    }
    ctx->pc = 0x1E70A8u;
    // 0x1e70a8: 0x661821
    ctx->pc = 0x1e70a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e70ac: 0x31880
    ctx->pc = 0x1e70acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e70b0: 0xe31821
    ctx->pc = 0x1e70b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1e70b4: 0xc481000c
    ctx->pc = 0x1e70b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e70b8: 0xc4600000
    ctx->pc = 0x1e70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e70bc: 0x46000834
    ctx->pc = 0x1e70bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e70c0: 0x0
    ctx->pc = 0x1e70c0u;
    // NOP
    // 0x1e70c4: 0x45000012
    ctx->pc = 0x1E70C4u;
    {
        const bool branch_taken_0x1e70c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e70c4) {
            ctx->pc = 0x1E7110u;
            goto label_1e7110;
        }
    }
    ctx->pc = 0x1E70CCu;
label_1e70cc:
    // 0x1e70cc: 0x84830016
    ctx->pc = 0x1e70ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1e70d0: 0x2463ffff
    ctx->pc = 0x1e70d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e70d4: 0xa4830016
    ctx->pc = 0x1e70d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e70d8: 0x84850016
    ctx->pc = 0x1e70d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1e70dc: 0x18a0000c
    ctx->pc = 0x1E70DCu;
    {
        const bool branch_taken_0x1e70dc = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1E70E0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1e70dc) {
            ctx->pc = 0x1E7110u;
            goto label_1e7110;
        }
    }
    ctx->pc = 0x1E70E4u;
    // 0x1e70e4: 0x651821
    ctx->pc = 0x1e70e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e70e8: 0x32880
    ctx->pc = 0x1e70e8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e70ec: 0x8c830000
    ctx->pc = 0x1e70ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e70f0: 0xc480000c
    ctx->pc = 0x1e70f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e70f4: 0x651821
    ctx->pc = 0x1e70f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e70f8: 0xc4610000
    ctx->pc = 0x1e70f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e70fc: 0x46010034
    ctx->pc = 0x1e70fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7100: 0x0
    ctx->pc = 0x1e7100u;
    // NOP
    // 0x1e7104: 0x4501fff1
    ctx->pc = 0x1E7104u;
    {
        const bool branch_taken_0x1e7104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7104) {
            ctx->pc = 0x1E70CCu;
            goto label_1e70cc;
        }
    }
    ctx->pc = 0x1E710Cu;
    // 0x1e710c: 0x0
    ctx->pc = 0x1e710cu;
    // NOP
label_1e7110:
    // 0x1e7110: 0x8c870004
    ctx->pc = 0x1e7110u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e7114:
    // 0x1e7114: 0x10e0003e
    ctx->pc = 0x1E7114u;
    {
        const bool branch_taken_0x1e7114 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7114) {
            ctx->pc = 0x1E7210u;
            goto label_1e7210;
        }
    }
    ctx->pc = 0x1E711Cu;
    // 0x1e711c: 0x84860018
    ctx->pc = 0x1e711cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e7120: 0x84830012
    ctx->pc = 0x1e7120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1e7124: 0x24c50001
    ctx->pc = 0x1e7124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7128: 0x10a3001e
    ctx->pc = 0x1E7128u;
    {
        const bool branch_taken_0x1e7128 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E712Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e7128) {
            ctx->pc = 0x1E71A4u;
            goto label_1e71a4;
        }
    }
    ctx->pc = 0x1E7130u;
    // 0x1e7130: 0x661821
    ctx->pc = 0x1e7130u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7134: 0x31880
    ctx->pc = 0x1e7134u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7138: 0x671821
    ctx->pc = 0x1e7138u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e713c: 0xc4610014
    ctx->pc = 0x1e713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7140: 0xc480000c
    ctx->pc = 0x1e7140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7144: 0x46010034
    ctx->pc = 0x1e7144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7148: 0x0
    ctx->pc = 0x1e7148u;
    // NOP
    // 0x1e714c: 0x45010015
    ctx->pc = 0x1E714Cu;
    {
        const bool branch_taken_0x1e714c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e714c) {
            ctx->pc = 0x1E71A4u;
            goto label_1e71a4;
        }
    }
    ctx->pc = 0x1E7154u;
label_1e7154:
    // 0x1e7154: 0x84830018
    ctx->pc = 0x1e7154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e7158: 0x24630001
    ctx->pc = 0x1e7158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e715c: 0xa4830018
    ctx->pc = 0x1e715cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7160: 0x84860018
    ctx->pc = 0x1e7160u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e7164: 0x84830012
    ctx->pc = 0x1e7164u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1e7168: 0x24c50001
    ctx->pc = 0x1e7168u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e716c: 0x10a30028
    ctx->pc = 0x1E716Cu;
    {
        const bool branch_taken_0x1e716c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E7170u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e716c) {
            ctx->pc = 0x1E7210u;
            goto label_1e7210;
        }
    }
    ctx->pc = 0x1E7174u;
    // 0x1e7174: 0x661821
    ctx->pc = 0x1e7174u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7178: 0x32880
    ctx->pc = 0x1e7178u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e717c: 0x8c830004
    ctx->pc = 0x1e717cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e7180: 0xc480000c
    ctx->pc = 0x1e7180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7184: 0x651821
    ctx->pc = 0x1e7184u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7188: 0xc4610014
    ctx->pc = 0x1e7188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e718c: 0x46010034
    ctx->pc = 0x1e718cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7190: 0x0
    ctx->pc = 0x1e7190u;
    // NOP
    // 0x1e7194: 0x4500ffef
    ctx->pc = 0x1E7194u;
    {
        const bool branch_taken_0x1e7194 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7194) {
            ctx->pc = 0x1E7154u;
            goto label_1e7154;
        }
    }
    ctx->pc = 0x1E719Cu;
    // 0x1e719c: 0x1000001d
    ctx->pc = 0x1E719Cu;
    {
        const bool branch_taken_0x1e719c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E71A0u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
        if (branch_taken_0x1e719c) {
            ctx->pc = 0x1E7214u;
            goto label_1e7214;
        }
    }
    ctx->pc = 0x1E71A4u;
label_1e71a4:
    // 0x1e71a4: 0x18c0001a
    ctx->pc = 0x1E71A4u;
    {
        const bool branch_taken_0x1e71a4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1E71A8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e71a4) {
            ctx->pc = 0x1E7210u;
            goto label_1e7210;
        }
    }
    ctx->pc = 0x1E71ACu;
    // 0x1e71ac: 0x661821
    ctx->pc = 0x1e71acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e71b0: 0x31880
    ctx->pc = 0x1e71b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e71b4: 0xe31821
    ctx->pc = 0x1e71b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1e71b8: 0xc481000c
    ctx->pc = 0x1e71b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e71bc: 0xc4600000
    ctx->pc = 0x1e71bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e71c0: 0x46000834
    ctx->pc = 0x1e71c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e71c4: 0x0
    ctx->pc = 0x1e71c4u;
    // NOP
    // 0x1e71c8: 0x45000011
    ctx->pc = 0x1E71C8u;
    {
        const bool branch_taken_0x1e71c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e71c8) {
            ctx->pc = 0x1E7210u;
            goto label_1e7210;
        }
    }
    ctx->pc = 0x1E71D0u;
label_1e71d0:
    // 0x1e71d0: 0x84830018
    ctx->pc = 0x1e71d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e71d4: 0x2463ffff
    ctx->pc = 0x1e71d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e71d8: 0xa4830018
    ctx->pc = 0x1e71d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e71dc: 0x84850018
    ctx->pc = 0x1e71dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e71e0: 0x18a0000b
    ctx->pc = 0x1E71E0u;
    {
        const bool branch_taken_0x1e71e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1E71E4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1e71e0) {
            ctx->pc = 0x1E7210u;
            goto label_1e7210;
        }
    }
    ctx->pc = 0x1E71E8u;
    // 0x1e71e8: 0x651821
    ctx->pc = 0x1e71e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e71ec: 0x32880
    ctx->pc = 0x1e71ecu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e71f0: 0x8c830004
    ctx->pc = 0x1e71f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e71f4: 0xc480000c
    ctx->pc = 0x1e71f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e71f8: 0x651821
    ctx->pc = 0x1e71f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e71fc: 0xc4610000
    ctx->pc = 0x1e71fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7200: 0x46010034
    ctx->pc = 0x1e7200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7204: 0x0
    ctx->pc = 0x1e7204u;
    // NOP
    // 0x1e7208: 0x4501fff1
    ctx->pc = 0x1E7208u;
    {
        const bool branch_taken_0x1e7208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7208) {
            ctx->pc = 0x1E71D0u;
            goto label_1e71d0;
        }
    }
    ctx->pc = 0x1E7210u;
label_1e7210:
    // 0x1e7210: 0x8c870008
    ctx->pc = 0x1e7210u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e7214:
    // 0x1e7214: 0x10e0003e
    ctx->pc = 0x1E7214u;
    {
        const bool branch_taken_0x1e7214 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7214) {
            ctx->pc = 0x1E7310u;
            goto label_1e7310;
        }
    }
    ctx->pc = 0x1E721Cu;
    // 0x1e721c: 0x8486001a
    ctx->pc = 0x1e721cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1e7220: 0x84830014
    ctx->pc = 0x1e7220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e7224: 0x24c50001
    ctx->pc = 0x1e7224u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7228: 0x10a3001e
    ctx->pc = 0x1E7228u;
    {
        const bool branch_taken_0x1e7228 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E722Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e7228) {
            ctx->pc = 0x1E72A4u;
            goto label_1e72a4;
        }
    }
    ctx->pc = 0x1E7230u;
    // 0x1e7230: 0x661821
    ctx->pc = 0x1e7230u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7234: 0x31880
    ctx->pc = 0x1e7234u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7238: 0x671821
    ctx->pc = 0x1e7238u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1e723c: 0xc4610014
    ctx->pc = 0x1e723cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7240: 0xc480000c
    ctx->pc = 0x1e7240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7244: 0x46010034
    ctx->pc = 0x1e7244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7248: 0x0
    ctx->pc = 0x1e7248u;
    // NOP
    // 0x1e724c: 0x45010015
    ctx->pc = 0x1E724Cu;
    {
        const bool branch_taken_0x1e724c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e724c) {
            ctx->pc = 0x1E72A4u;
            goto label_1e72a4;
        }
    }
    ctx->pc = 0x1E7254u;
label_1e7254:
    // 0x1e7254: 0x8483001a
    ctx->pc = 0x1e7254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1e7258: 0x24630001
    ctx->pc = 0x1e7258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e725c: 0xa483001a
    ctx->pc = 0x1e725cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e7260: 0x8486001a
    ctx->pc = 0x1e7260u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1e7264: 0x84830014
    ctx->pc = 0x1e7264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e7268: 0x24c50001
    ctx->pc = 0x1e7268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e726c: 0x10a30028
    ctx->pc = 0x1E726Cu;
    {
        const bool branch_taken_0x1e726c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E7270u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e726c) {
            ctx->pc = 0x1E7310u;
            goto label_1e7310;
        }
    }
    ctx->pc = 0x1E7274u;
    // 0x1e7274: 0x661821
    ctx->pc = 0x1e7274u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7278: 0x32880
    ctx->pc = 0x1e7278u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e727c: 0x8c830008
    ctx->pc = 0x1e727cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e7280: 0xc480000c
    ctx->pc = 0x1e7280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7284: 0x651821
    ctx->pc = 0x1e7284u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7288: 0xc4610014
    ctx->pc = 0x1e7288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e728c: 0x46010034
    ctx->pc = 0x1e728cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7290: 0x0
    ctx->pc = 0x1e7290u;
    // NOP
    // 0x1e7294: 0x4500ffef
    ctx->pc = 0x1E7294u;
    {
        const bool branch_taken_0x1e7294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7294) {
            ctx->pc = 0x1E7254u;
            goto label_1e7254;
        }
    }
    ctx->pc = 0x1E729Cu;
    // 0x1e729c: 0x1000001c
    ctx->pc = 0x1E729Cu;
    {
        const bool branch_taken_0x1e729c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e729c) {
            ctx->pc = 0x1E7310u;
            goto label_1e7310;
        }
    }
    ctx->pc = 0x1E72A4u;
label_1e72a4:
    // 0x1e72a4: 0x18c0001a
    ctx->pc = 0x1E72A4u;
    {
        const bool branch_taken_0x1e72a4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1E72A8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1e72a4) {
            ctx->pc = 0x1E7310u;
            goto label_1e7310;
        }
    }
    ctx->pc = 0x1E72ACu;
    // 0x1e72ac: 0x661821
    ctx->pc = 0x1e72acu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e72b0: 0x31880
    ctx->pc = 0x1e72b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e72b4: 0xe31821
    ctx->pc = 0x1e72b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1e72b8: 0xc481000c
    ctx->pc = 0x1e72b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e72bc: 0xc4600000
    ctx->pc = 0x1e72bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e72c0: 0x46000834
    ctx->pc = 0x1e72c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e72c4: 0x0
    ctx->pc = 0x1e72c4u;
    // NOP
    // 0x1e72c8: 0x45000011
    ctx->pc = 0x1E72C8u;
    {
        const bool branch_taken_0x1e72c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e72c8) {
            ctx->pc = 0x1E7310u;
            goto label_1e7310;
        }
    }
    ctx->pc = 0x1E72D0u;
label_1e72d0:
    // 0x1e72d0: 0x8483001a
    ctx->pc = 0x1e72d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1e72d4: 0x2463ffff
    ctx->pc = 0x1e72d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e72d8: 0xa483001a
    ctx->pc = 0x1e72d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e72dc: 0x8485001a
    ctx->pc = 0x1e72dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1e72e0: 0x18a0000b
    ctx->pc = 0x1E72E0u;
    {
        const bool branch_taken_0x1e72e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1E72E4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x1e72e0) {
            ctx->pc = 0x1E7310u;
            goto label_1e7310;
        }
    }
    ctx->pc = 0x1E72E8u;
    // 0x1e72e8: 0x651821
    ctx->pc = 0x1e72e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e72ec: 0x32880
    ctx->pc = 0x1e72ecu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e72f0: 0x8c830008
    ctx->pc = 0x1e72f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e72f4: 0xc480000c
    ctx->pc = 0x1e72f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e72f8: 0x651821
    ctx->pc = 0x1e72f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e72fc: 0xc4610000
    ctx->pc = 0x1e72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7300: 0x46010034
    ctx->pc = 0x1e7300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7304: 0x0
    ctx->pc = 0x1e7304u;
    // NOP
    // 0x1e7308: 0x4501fff1
    ctx->pc = 0x1E7308u;
    {
        const bool branch_taken_0x1e7308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7308) {
            ctx->pc = 0x1E72D0u;
            goto label_1e72d0;
        }
    }
    ctx->pc = 0x1E7310u;
label_1e7310:
    // 0x1e7310: 0x3e00008
    ctx->pc = 0x1E7310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E700Cu: goto label_1e700c;
            case 0x1E7050u: goto label_1e7050;
            case 0x1E70A0u: goto label_1e70a0;
            case 0x1E70CCu: goto label_1e70cc;
            case 0x1E7110u: goto label_1e7110;
            case 0x1E7114u: goto label_1e7114;
            case 0x1E7154u: goto label_1e7154;
            case 0x1E71A4u: goto label_1e71a4;
            case 0x1E71D0u: goto label_1e71d0;
            case 0x1E7210u: goto label_1e7210;
            case 0x1E7214u: goto label_1e7214;
            case 0x1E7254u: goto label_1e7254;
            case 0x1E72A4u: goto label_1e72a4;
            case 0x1E72D0u: goto label_1e72d0;
            case 0x1E7310u: goto label_1e7310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7318u;
}
