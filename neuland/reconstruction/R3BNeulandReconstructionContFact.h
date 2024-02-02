/******************************************************************************
 *   Copyright (C) 2019 GSI Helmholtzzentrum für Schwerionenforschung GmbH    *
 *   Copyright (C) 2019-2024 Members of R3B Collaboration                     *
 *                                                                            *
 *             This software is distributed under the terms of the            *
 *                 GNU General Public Licence (GPL) version 3,                *
 *                    copied verbatim in the file "LICENSE".                  *
 *                                                                            *
 * In applying this license GSI does not waive the privileges and immunities  *
 * granted to it by virtue of its status as an Intergovernmental Organization *
 * or submit itself to any jurisdiction.                                      *
 ******************************************************************************/

#ifndef R3BNEULANDRECONSTRUCTIONCONTFACT_H
#define R3BNEULANDRECONSTRUCTIONCONTFACT_H

#include "FairContFact.h"

class FairContainer;

/**
 * NeuLAND reconstruction parameter container factory
 * @author Jan Mayer
 *
 * Lots of super brittle boilerplate code that should really not be necessary
 * TODO: Make FairRoot better so all of this can be deleted.
 */

class R3BNeulandReconstructionContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BNeulandReconstructionContFact();
    FairParSet* createContainer(FairContainer*) override;
    ClassDefOverride(R3BNeulandReconstructionContFact, 0)
};

#endif // R3BNEULANDRECONSTRUCTIONCONTFACT_H
